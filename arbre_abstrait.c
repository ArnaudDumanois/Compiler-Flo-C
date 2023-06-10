#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arbre_abstrait.h"

/* Abbréviations: 
  * n -> noeud
  * l -> liste
*/



//affiche l'entier avec sa valeur après un certain nombres d'espaces et un retour à la ligne
void afficher(char* s,int indent){
	for(int i = 0; i < indent; i++){
	    printf(" ");
	}
	printf("%s\n",s);
}

//affiche l'entier avec sa valeur après un certain nombres d'espaces
void afficher_caractere(char c,int indent){
	for(int i = 0; i < indent; i++){
	printf(" "); 
	}
	printf("%c\n",c);
}

//affiche la chaine de caractère s après un certain nombres d'espaces
void afficher_entier(int valeur,int indent){
	for(int i = 0; i < indent; i++){
	printf(" ");
	}
	printf("[Entier:%d]\n",valeur);
}

void afficher_n_variable(n_variable* variable ,int indent){
    for (int i = 0; i < indent; i++){
        printf(" ");
    }
    printf("[Variable: %s]\n",variable->nom);
}

void afficher_n_booleen(n_exp* booleen ,int indent){
    for (int i = 0; i < indent; i++){
        printf(" ");
    }
    if (booleen->u.valeur == 1){
        printf("[Booleen: vrai]\n");
    } else {
        printf("[Booleen: faux]\n");
    }
}

void afficher_n_programme(n_programme* prog,int indent){
	afficher("<programme>",indent);
    if (prog->fonctions != NULL){
        printf("fonctions\n");
        afficher_n_l_fonctions(prog->fonctions,indent+1);
    }
	afficher_n_l_instructions(prog->instructions,indent+1);
	afficher("</programme>",indent);
}

void afficher_n_l_fonctions(n_l_fonctions* fonctions ,int indent){
    afficher("<liste_fonctions>",indent);
    do {
        if (fonctions->fonction != NULL){
            afficher_n_fonction(fonctions->fonction,indent+1);
        }
        fonctions = fonctions->suivant;
    } while(fonctions != NULL );
    afficher("</liste_fonctions>",indent);
}

void afficher_n_fonction(n_fonction* fonction ,int indent){
    afficher("<fonction>",indent);
    if (fonction->t_type == t_entier){
        afficher("entier",indent+1);
    } else if (fonction->t_type == t_booleen){
        afficher("booleen",indent+1);
    }
    afficher(fonction->nom,indent+1);
    if (fonction->parametres != NULL){
        afficher_n_l_parametres(fonction->parametres,indent+1);
    }
    if (fonction->instructions != NULL){
        afficher_n_l_instructions(fonction->instructions,indent+1);
    }
    afficher("</fonction>",indent);
}

void afficher_n_l_parametres(n_l_parametres* parametres ,int indent){
    afficher("<liste_parametres>",indent);
    do {
        if (parametres->parametre != NULL){
            afficher_n_parametre(parametres->parametre,indent+1);
        }
            parametres = parametres->suivant;
    } while(parametres != NULL );
    afficher("</liste_parametres>",indent);
}

void afficher_n_parametre(n_parametre* parametre ,int indent){
    afficher("<parametre>",indent);
    if (parametre->t_type == t_entier){
        afficher("entier",indent+1);
    } else if (parametre->t_type == t_booleen){
        afficher("booleen",indent+1);
    }
    afficher(parametre->nom,indent+1);
    afficher("</parametre>",indent);
}


void afficher_n_l_instructions(n_l_instructions* instructions ,int indent){
	afficher("<liste_instuctions>",indent);
	do {
		if (instructions->instruction != NULL){
			afficher_n_instruction(instructions->instruction,indent+1);
		}
		instructions = instructions->instructions;
	} while(instructions != NULL );
	afficher("</liste_instructions>",indent);
}


void afficher_n_instruction(n_instruction* instruction ,int indent){
	if(instruction->type_instruction == i_ecrire){
		afficher("<ecrire>",indent);
		afficher_n_exp(instruction->u.exp,indent+1);
		afficher("</ecrire>",indent);
	} else if (instruction->type_instruction == i_declaration) {
        afficher("<declaration>",indent);
        if (instruction->u.declaration->t_type == t_entier){
            afficher("entier",indent+1);
            afficher_n_variable(instruction->u.declaration->variable,indent+1);
        } else if (instruction->u.declaration->t_type == t_booleen){
            afficher("booleen",indent+1);
            afficher_n_variable(instruction->u.declaration->variable,indent+1);
        }
        afficher("</declaration>",indent);
    } else if (instruction->type_instruction == i_affectation){
        afficher("<affectation>",indent);
        afficher_n_variable(instruction->u.affectation->variable,indent+1);
        afficher("=",indent+1);
        afficher_n_exp(instruction->u.affectation->exp,indent+1);
        afficher("</affectation>",indent);
    } else if (instruction->type_instruction == i_decla_aff){
        afficher("<declaration_affectation>",indent);
        afficher_n_instruction(instruction->u.decla_aff->declaration,indent+1);
        afficher_n_instruction(instruction->u.decla_aff->affectation,indent+1);
        afficher("</declaration_affectation>",indent);
    } else if (instruction->type_instruction == i_conditionnelle){
        afficher("<conditionnelle>",indent);
        afficher("<si>",indent+1);
        afficher_n_exp(instruction->u.conditionnelle->condition,indent+1);
        afficher("</si>",indent+1);
        afficher("<alors>",indent+1);
        afficher_n_l_instructions(instruction->u.conditionnelle->instructions_si,indent+1);
        afficher("</alors>",indent+1);
        if (instruction->u.conditionnelle->liste_sinon_si != NULL){
            afficher("<sinon_si>",indent+1);
            afficher_n_instruction(instruction->u.conditionnelle->liste_sinon_si,indent+1);
            afficher("</sinon_si>",indent+1);
        }
        if (instruction->u.conditionnelle->liste_sinon){
            afficher("<sinon>",indent+1);
            afficher_n_l_instructions(instruction->u.conditionnelle->liste_sinon,indent+1);
            afficher("</sinon>",indent+1);
        }
        afficher("</conditionnelle>",indent);
    } else if (instruction->type_instruction == i_boucle_tantque) {
        afficher("<tantque>",indent);
        afficher("<condition Tantque>",indent+1);
        afficher_n_exp(instruction->u.boucle_tantque->condition,indent+1);
        afficher("</condition Tantque>",indent+1);
        afficher("<instructions Tantque>",indent+1);
        afficher_n_l_instructions(instruction->u.boucle_tantque->instructions,indent+1);
        afficher("</instructions Tantque>",indent+1);
        afficher("</tantque>",indent);
    } else if (instruction->type_instruction == i_retour){
        afficher("<retour>",indent);
        afficher_n_exp(instruction->u.retour->exp,indent+1);
        afficher("</retour>",indent);
    } else if (instruction->type_instruction == i_appelF){
        afficher("<appel>",indent);
        afficher_n_appel(instruction->u.appelF,indent+1);
        afficher("</appel>",indent);
    }
}


void afficher_n_exp(n_exp* exp ,int indent){
	if (exp->type_exp == i_operation){
		afficher_n_operation(exp->u.operation,indent);
	} else if (exp->type_exp == i_entier){
		afficher_entier(exp->u.valeur,indent);
	} else if (exp->type_exp == i_appel){
        afficher_n_appel(exp->u.appel,indent);
    } else if (exp->type_exp == i_lire){
        afficher_n_lire(indent);
    } else if (exp->type_exp == i_booleen){
        afficher_n_booleen(exp,indent);
    } else if (exp->type_exp == i_variable){
        afficher_n_variable(exp->u.variable,indent);
    }
}


void afficher_n_operation(n_operation* operation ,int indent){
    if (operation->type_operat == o_simple) {
        afficher("<operation>", indent);
        afficher_caractere(operation->type_operation, indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_infEgal) {
        afficher("<operation>", indent);
        afficher("<=", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_supEgal) {
        afficher("<operation>", indent);
        afficher(">=", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_egal) {
        afficher("<operation>", indent);
        afficher("==", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_diff) {
        afficher("<operation>", indent);
        afficher("!=", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_ou) {
        afficher("<operation>", indent);
        afficher("ou", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_et) {
        afficher("<operation>", indent);
        afficher("et", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher_n_exp(operation->exp2, indent + 1);
        afficher("</operation>", indent);
    } else if (operation->type_operat == o_non) {
        afficher("<operation>", indent);
        afficher("non", indent + 1);
        afficher_n_exp(operation->exp1, indent + 1);
        afficher("</operation>", indent);
    }
}


void afficher_n_lire(int indent){
    afficher("<lire>",indent);
    afficher("</lire>",indent);
}

void afficher_n_l_exp(n_l_exp* l_exp ,int indent){
    afficher("<liste_exp>",indent);
    do {
        if (l_exp->exp != NULL){
            afficher_n_exp(l_exp->exp,indent+1);
        }
        l_exp = l_exp->suivant;
    } while(l_exp != NULL );
    afficher("</liste_exp>",indent);
}

void afficher_n_appel(n_appel* appel ,int indent){
    afficher(appel->nom,indent+1);
    afficher("<arguments>",indent+1);
    if (appel->arguments != NULL){
        afficher_n_l_exp(appel->arguments,indent+1);
    }
    afficher("</arguments>",indent+1);
}


void afficher_n_declaration(n_exp *declaration, int indent){
}

// Création des noeuds

n_programme* creer_n_programme(n_l_fonctions* fonctions,n_l_instructions* instructions){
    n_programme* n = malloc(sizeof(n_programme));
    n->fonctions = fonctions;
    n->instructions = instructions;
    return n;
}

n_l_instructions* creer_n_l_instructions(n_instruction* instruction ,n_l_instructions* instructions){
  n_l_instructions* n = malloc(sizeof(n_l_instructions));
  n->instruction = instruction;
  n->instructions = instructions;
  return n;
}

n_instruction* creer_n_ecrire(n_exp* exp){
  n_instruction* n = malloc(sizeof(n_instruction));
  n->type_instruction = i_ecrire;
  n->u.exp = exp;
  return n;
}

n_exp* creer_n_entier(int valeur){
  n_exp* n = malloc(sizeof(n_exp));
  n->type_exp = i_entier;
  n->u.valeur = valeur;
  return n;
}

n_exp* creer_n_operation(char type_operation,n_exp* exp1,n_exp* exp2){
  n_exp* n = malloc(sizeof(n_exp));
  n_operation* n_op = malloc(sizeof(n_operation));
  n->u.operation = n_op;
  n->type_exp = i_operation;
  n->u.operation->type_operat = o_simple;
  n_op->type_operation = type_operation;
  n_op->exp1 = exp1;
  n_op->exp2 = exp2;
  return n;
}

n_exp* creer_n_operation_infeg(n_exp* exp1,n_exp* exp2){
  n_exp* n = malloc(sizeof(n_exp));
  n_operation* n_op = malloc(sizeof(n_operation));
  n->u.operation = n_op;
  n->u.operation->type_operat = o_infEgal;
  n->type_exp = i_operation;
  n_op->exp1 = exp1;
  n_op->exp2 = exp2;
  return n;
}

n_exp* creer_n_operation_supeg(n_exp* exp1,n_exp* exp2){
  n_exp* n = malloc(sizeof(n_exp));
  n_operation* n_op = malloc(sizeof(n_operation));
  n->u.operation = n_op;
  n->u.operation->type_operat = o_supEgal;
  n->type_exp = i_operation;
  n_op->exp1 = exp1;
  n_op->exp2 = exp2;
  return n;
}

n_exp* creer_n_operation_egal(n_exp* exp1,n_exp* exp2) {
    n_exp *n = malloc(sizeof(n_exp));
    n_operation *n_op = malloc(sizeof(n_operation));
    n->u.operation = n_op;
    n->u.operation->type_operat = o_egal;
    n->type_exp = i_operation;
    n_op->exp1 = exp1;
    n_op->exp2 = exp2;
    return n;
}

n_exp* creer_n_operation_diff(n_exp* exp1,n_exp* exp2) {
    n_exp *n = malloc(sizeof(n_exp));
    n_operation *n_op = malloc(sizeof(n_operation));
    n->u.operation = n_op;
    n->u.operation->type_operat = o_diff;
    n->type_exp = i_operation;
    n_op->exp1 = exp1;
    n_op->exp2 = exp2;
    return n;
}

n_exp* creer_n_variable(char *nom) {
    n_exp *n = malloc(sizeof(n_exp));
    n_variable *n_var = malloc(sizeof(n_variable));
    n->u.variable = n_var;
    n->type_exp = i_variable;
    n_var->nom = nom;
    return n;
}

n_exp* creer_n_lire() {
    n_exp *n = malloc(sizeof(n_exp));
    n->type_exp = i_lire;
    return n;
}

n_l_exp *creer_n_l_exp(n_exp *exp, n_l_exp *l_exp) {
    n_l_exp *n = malloc(sizeof(n_l_exp));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->exp = exp;
    n->suivant = l_exp;
    return n;
}

n_exp *creer_n_appel(char *nom, n_l_exp *arguments) {
    n_exp *n = malloc(sizeof(n_exp));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->type_exp = i_appel;
    n->u.appel = malloc(sizeof(n_appel));
    n->u.appel->nom = nom;
    n->u.appel->arguments = arguments;
    return n;
}

n_exp *creer_n_booleen(int valeur) {
    n_exp *n = malloc(sizeof(n_exp));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->type_exp = i_booleen;
    n->u.valeur = valeur;
    if (valeur != 0) {
        n->u.valeur = 1;
    } else {
        n->u.valeur = 0;
    }
    return n;
}

n_exp *creer_n_operation_non(n_exp *exp) {
    n_exp *n = malloc(sizeof(n_exp));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->type_exp = i_operation;
    n->u.operation = malloc(sizeof(n_operation));
    n->u.operation->type_operat = o_non;
    n->u.operation->exp1 = exp;
    return n;
}

n_exp *creer_n_operation_et(n_exp *exp1, n_exp *exp2) {
    n_exp *n = malloc(sizeof(n_exp));
    n_operation *n_op = malloc(sizeof(n_operation));
    n->u.operation = n_op;
    n->u.operation->type_operat = o_et;
    n->type_exp = i_operation;
    n_op->exp1 = exp1;
    n_op->exp2 = exp2;
    return n;
}

n_exp *creer_n_operation_ou(n_exp *exp1, n_exp *exp2) {
    n_exp *n = malloc(sizeof(n_exp));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->type_exp = i_operation;
    n->u.operation = malloc(sizeof(n_operation));
    n->u.operation->type_operat = o_ou;
    n->u.operation->exp1 = exp1;
    n->u.operation->exp2 = exp2;
    return n;
}

n_instruction* creer_n_declaration(n_exp *exp, type type) {
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        exit(1);
    }
    n->u.declaration = malloc(sizeof(n_declaration));
    n_variable *n_var = malloc(sizeof(n_variable));
    n_var->t_type = type;
    n_var = exp->u.variable;
    n->u.declaration->variable = n_var;
    n->u.declaration->t_type = type;
    n->type_instruction = i_declaration;
    return n;
}

n_instruction* creer_n_affectation(n_exp *exp1, n_exp *exp2) {
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->type_instruction = i_affectation;
    n->u.affectation = malloc(sizeof(n_affectation));
    n->u.affectation->variable = exp1->u.variable;
    n->u.affectation->exp = exp2;
    return n;
}

n_instruction* creer_n_decla_aff(n_instruction *declaration, n_instruction *affectation) {
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->type_instruction = i_decla_aff;
    n->u.decla_aff = malloc(sizeof(n_decla_aff));
    n->u.decla_aff->declaration = declaration;
    n->u.decla_aff->affectation = affectation;
    return n;
}

n_instruction* creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon) {
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
     n->type_instruction = i_conditionnelle;
     n->u.conditionnelle = malloc(sizeof(n_conditionnelle));
     n->u.conditionnelle->condition = condition;
     n->u.conditionnelle->instructions_si = instructions_si;
     n->u.conditionnelle->liste_sinon_si = liste_sinon_si;
     n->u.conditionnelle->liste_sinon = liste_sinon;
     return n;
}

n_instruction* creer_n_boucle_tantque(n_exp* condition, n_l_instructions* instructions) {
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->type_instruction = i_boucle_tantque;
    n->u.boucle_tantque = malloc(sizeof(n_boucle_tantque));
    n->u.boucle_tantque->condition = condition;
    n->u.boucle_tantque->instructions = instructions;
    return n;
}

n_instruction* creer_n_retour(n_exp* exp){
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->type_instruction = i_retour;
    n->u.retour = malloc(sizeof(n_retour));
    n->u.retour->exp = exp;
    return n;
}

n_instruction* creer_n_appelF(char* nom, n_l_exp* arguments){
    n_instruction *n = malloc(sizeof(n_instruction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->type_instruction = i_appelF;
    n->u.appelF = malloc(sizeof(n_appel));
    n->u.appelF->nom = nom;
    n->u.appelF->arguments = arguments;
    return n;
}

n_l_fonctions* creer_n_l_fonctions(n_fonction* fonction, n_l_fonctions* suivant){
    n_l_fonctions *n = malloc(sizeof(n_l_fonctions));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->fonction = fonction;
    n->suivant = suivant;
    return n;
}

n_fonction* creer_n_fonction(type t_type, char* nom, n_l_parametres * parametres, n_l_instructions* instructions){
    n_fonction *n = malloc(sizeof(n_fonction));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->t_type = t_type;
    n->nom = nom;
    n->parametres = parametres;
    n->instructions = instructions;
    return n;
}

n_l_parametres* creer_n_l_parametres(n_parametre* parametre, n_l_parametres* suivant){
    n_l_parametres *n = malloc(sizeof(n_l_parametres));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->parametre = parametre;
    n->suivant = suivant;
    return n;
}
n_parametre* creer_n_parametre(type t_type, char* nom){
    n_parametre *n = malloc(sizeof(n_parametre));
    if (n == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire");
        exit(1);
    }
    n->t_type = t_type;
    n->nom = nom;
    return n;
}
