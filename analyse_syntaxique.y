%{
#include <stdlib.h>
#include <stdio.h>
#include "arbre_abstrait.h"
#include "analyse_lexicale.h"


//n_programme* yyparse();
int yylex();
int yyerror(const char *s);
n_programme* arbre_abstrait;
%}

%union {
    int entier;
    n_programme* prog;
    n_l_instructions* l_inst;
    n_instruction* inst;
    n_exp* exp;
    n_l_exp* l_exp;
    char* ident;
    type type;
    n_l_fonctions* l_fonctions;
    n_fonction* fonction;
    n_l_parametres* l_parametres;
    n_parametre* parametre;
}


%define parse.error verbose
%define parse.lac full
//Symboles terminaux qui seront fournis par yylex(), ordre non important

%token <ident> IDENTIFIANT
%token PARENTHESE_OUVRANTE
%token PARENTHESE_FERMANTE
%token POINT_VIRGULE
%token <entier> ENTIER
%token ECRIRE
%token FIN 0
%token AFFECTATION EGAL DIFFERENT INFERIEUR SUPERIEUR INFERIEUR_EGAL SUPERIEUR_EGAL ACCOLADE_FERMANTE ACCOLADE_OUVRANTE VIRGULE
%token SI SINON SINON_SI LIRE TANT_QUE NON ET OU RETOURNER MOINS DIVISE MODULO FOIS PLUS
%token <ident> TYPE_ENTIER TYPE_BOOLEEN
%token <entier> BOOLEEN



%left AFFECTATION
%left PARENTHESE_OUVRANTE
%left ET
%left OU
%right NON // priorité sur les opérateurs logiques et peut être sur les DIFERENT EGAL
%right EGAL
%left DIFFERENT INFERIEUR SUPERIEUR INFERIEUR_EGAL SUPERIEUR_EGAL
%left PLUS MOINS
%left FOIS DIVISE MODULO
%nonassoc UMOINS

%type <prog> prog
%type <l_inst> listeInstructions
%type <inst> instruction
%type <inst> ecrire
%type <inst> declaration
%type <inst> affectation
%type <inst> declarationAffectation
%type <inst> conditionnelle
%type <inst> listeSinonSi
%type <inst> boucleTanque
%type <inst> retourner
%type <inst> appelFonction

%type <exp> exprAll
%type <exp> booleen
%type <exp> expr
%type <exp> facteur
%type <l_exp> listeExpressions

%type <fonction> fonction
%type <l_fonctions> listeFonctions
%type <l_parametres> listeParametres
%type <parametre> parametre

%%

prog
	: listeInstructions {
	   arbre_abstrait = creer_n_programme(NULL,$1);
	}
	| listeFonctions listeInstructions {
	   arbre_abstrait = creer_n_programme($1,$2);
	}

listeFonctions
	: fonction {
		$$ = creer_n_l_fonctions($1, NULL);
	}
	| listeFonctions fonction {
		$$ = creer_n_l_fonctions($2, $1);
	}


fonction
	: TYPE_ENTIER IDENTIFIANT PARENTHESE_OUVRANTE listeParametres PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
	      	$$ = creer_n_fonction(t_entier, $2, $4, $7);
	}
        | TYPE_BOOLEEN IDENTIFIANT PARENTHESE_OUVRANTE listeParametres PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
              	$$ = creer_n_fonction(t_booleen, $2, $4, $7);
        }

listeParametres
	: parametre {
		$$ = creer_n_l_parametres($1, NULL);
	}
	| parametre VIRGULE listeParametres {
		$$ = creer_n_l_parametres($1, $3);
	}

parametre
	: TYPE_ENTIER IDENTIFIANT {
		$$ = creer_n_parametre(t_entier, $2);
	}
	| TYPE_BOOLEEN IDENTIFIANT {
		$$ = creer_n_parametre(t_booleen, $2);
	}



listeInstructions
	: instruction {
		$$ = creer_n_l_instructions($1 ,NULL);
	}
	| instruction listeInstructions {
		$$ =creer_n_l_instructions($1 ,$2);
	}

instruction
	: ecrire {
		$$ = $1;
	}
	| affectation {
		$$ = $1;
	}
	| conditionnelle {
		$$ = $1;
	}
	| boucleTanque {
		$$ = $1;
	}
	| retourner {
		$$ = $1;
	}
	| appelFonction {
		$$ = $1;
	}
	| declaration {
		$$ = $1;
	}
	| declarationAffectation {
		$$ = $1;
	}

ecrire: ECRIRE PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE POINT_VIRGULE {
		$$ = creer_n_ecrire($3);
	}

declaration
	: TYPE_ENTIER IDENTIFIANT POINT_VIRGULE  {
		$$ = creer_n_declaration(creer_n_variable($2), t_entier);
	}
	| TYPE_BOOLEEN IDENTIFIANT POINT_VIRGULE {
		$$ = creer_n_declaration(creer_n_variable($2), t_booleen);
	}

declarationAffectation
	: TYPE_ENTIER IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE {
		n_instruction* decl = creer_n_declaration(creer_n_variable($2), t_entier);
		n_instruction* aff = creer_n_affectation(creer_n_variable($2), $4);
		$$ = creer_n_decla_aff(decl, aff);

	}
	| TYPE_BOOLEEN IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE {
		n_instruction* decl = creer_n_declaration(creer_n_variable($2), t_booleen);
		n_instruction* aff = creer_n_affectation(creer_n_variable($2), $4);
		$$ = creer_n_decla_aff(decl, aff);
	}

affectation
	: IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE {
		$$ = creer_n_affectation(creer_n_variable($1), $3);
	}


conditionnelle
	: SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
		$$ = creer_n_conditionnelle($3, $6, NULL, NULL);
	}

	| SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE SINON ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		$$ = creer_n_conditionnelle($3, $6, NULL, $10);
	}
	| SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		//n_instruction* sinon_si = creer_n_conditionnelle($10, $13, NULL, NULL);
		$$ = creer_n_conditionnelle($3, $6, $8, NULL);
	}
	| SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi SINON ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		$$ = creer_n_conditionnelle($3, $6, $8, $11);
	}

listeSinonSi
	: SINON_SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
		$$ = creer_n_conditionnelle($3, $6, NULL, NULL);
	}
	| SINON_SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi {
		$$ = creer_n_conditionnelle($3, $6, $8, NULL);
	}

boucleTanque
	: TANT_QUE PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE {
		$$ = creer_n_boucle_tantque($3, $6);
	}

retourner
	: RETOURNER exprAll POINT_VIRGULE {
		$$ = creer_n_retour($2);
	}

appelFonction
	: IDENTIFIANT PARENTHESE_OUVRANTE listeExpressions PARENTHESE_FERMANTE POINT_VIRGULE {
		$$ = creer_n_appelF($1, $3);
	}

exprAll
	: booleen {
		$$ = $1;
	}

booleen
	: BOOLEEN {
		$$ = creer_n_booleen($1);
	}
	| expr {
		$$ = $1;
	}
	| booleen ET booleen {
		$$ = creer_n_operation_et($1, $3);
	}
	| booleen OU booleen {
		$$ = creer_n_operation_ou($1, $3);
	}
	| NON booleen {
		$$ = creer_n_operation_non($2);
	}


expr
	: expr PLUS expr{
		$$ =creer_n_operation('+', $1, $3);
	}
	| expr MOINS expr{
		$$ =creer_n_operation('-', $1 , $3);
	}
	| expr FOIS expr{
		$$ =creer_n_operation('*', $1 , $3);
	}
	| expr DIVISE expr{
		$$ =creer_n_operation('/', $1 , $3);
	}
	| expr MODULO expr{
		$$ =creer_n_operation('%', $1 , $3);
	}
	| MOINS expr %prec UMOINS{
		$$ =creer_n_operation('-', creer_n_entier(0), $2);
	}
	| PARENTHESE_OUVRANTE booleen PARENTHESE_FERMANTE {
		$$ = $2;
	}
	| expr SUPERIEUR expr {
		$$ = creer_n_operation('>', $1, $3);
	}
	| expr SUPERIEUR_EGAL expr {
		$$ = creer_n_operation_supeg($1, $3);
	}
	| expr INFERIEUR expr {
		$$ = creer_n_operation('<', $1, $3);
	}
	| expr INFERIEUR_EGAL expr {
		$$ = creer_n_operation_infeg($1, $3);
	}
	| expr EGAL expr {
		$$ = creer_n_operation_egal($1, $3);
	}
	| expr DIFFERENT expr {
		$$ = creer_n_operation_diff($1, $3);
	}
	| facteur {
		$$ = $1;
	}/*
	| BOOLEEN {
		$$ = creer_n_booleen($1);
	}
	*/

listeExpressions
	: exprAll {
		$$ = creer_n_l_exp($1, NULL);
	}
	| exprAll VIRGULE listeExpressions {
		$$ = creer_n_l_exp($1, $3);
	}

facteur
	: IDENTIFIANT {
		$$ = (n_exp*) creer_n_variable($1);
	}
        | ENTIER {
		$$ = creer_n_entier($1);
	}/*
	| BOOLEEN {
		$$ = creer_n_booleen($1);
	}
	*/
	| LIRE PARENTHESE_OUVRANTE PARENTHESE_FERMANTE {
		$$ = creer_n_lire();
	}
	| IDENTIFIANT PARENTHESE_OUVRANTE listeExpressions PARENTHESE_FERMANTE {
		$$ = (n_exp*) creer_n_appel($1, $3);
	}
	| IDENTIFIANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE {
		$$ = (n_exp*) creer_n_appel($1, NULL);
	}
%%

int yyerror(const char *s) {
    printf("yyerror : %s\n",s);
    return 0;
}

