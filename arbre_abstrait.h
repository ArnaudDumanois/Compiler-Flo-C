#ifndef __ARBRE_ABSTRAIT__
#define __ARBRE_ABSTRAIT__

/* Abbréviations: 
  * n -> noeud
  * l -> liste
  * exp -> expression (arithmétique)
*/


typedef struct n_programme n_programme; /* Noeud du type programme */
typedef struct n_l_instructions n_l_instructions; /* Noeud du type liste d'instructions */
typedef struct n_instruction n_instruction; /* Noeud du type liste instruction */
typedef struct n_ecrire n_ecrire; /* Noeud du type instruction ecrire */
typedef struct n_exp n_exp; /* Noeud du type expression (arithmétique) */
typedef struct n_operation n_operation; /* Noeud du type operation (arithmétique) */
typedef struct n_variable n_variable; /* Noeud du type variable */
typedef struct n_lire n_lire; /* Noeud du type instruction lire */
typedef struct n_appel n_appel; /* Noeud du type appel de fonction */
typedef struct n_l_exp n_l_exp; /* Noeud du type liste d'expressions */
typedef struct n_declaration n_declaration; /* Noeud du type declaration */
typedef enum { t_entier, t_booleen } type; /* Type d'une variable */
typedef struct n_affectation n_affectation; /* Noeud du type affectation */
typedef struct n_decla_aff n_decla_aff; /* Noeud du type declaration et affectation */
typedef struct n_conditionnelle n_conditionnelle; /* Noeud du type conditionnelle */
typedef struct n_boucle_tantque n_boucle_tantque; /* Noeud du type boucle tant que */
typedef struct n_retour n_retour; /* Noeud du type retour */
typedef struct n_l_fonctions n_l_fonctions; /* Noeud du type liste de fonctions */
typedef struct n_fonction n_fonction; /* Noeud du type fonction */
typedef struct n_l_parametres n_l_parametres; /* Noeud du type liste de parametres */
typedef struct n_parametre n_parametre; /* Noeud du type parametre */

struct n_programme{   // pour le moment un programme est juste une liste d'instructions. Il faudra ajouter une liste de définitions de fonctions.
	n_l_instructions* instructions;
    n_l_fonctions* fonctions;
};

struct n_l_instructions{
	n_instruction* instruction;
	n_l_instructions* instructions;
};

struct n_instruction{
  enum { i_ecrire, i_declaration, i_affectation, i_decla_aff, i_conditionnelle, i_boucle_tantque, i_retour, i_appelF } type_instruction; // pour le moment une instruction peut-être uniquement de type écrire. Il faudra ajouter affectation, exécution de fonction, si,sinon, etc...
  union{ 
    n_exp* exp; // pour ecrire(exp);
    n_declaration* declaration;
    n_affectation* affectation;
    n_decla_aff* decla_aff;
    n_conditionnelle* conditionnelle;
    n_boucle_tantque* boucle_tantque;
    n_retour* retour;
    n_appel* appelF;
  }u;
};

struct n_exp{
  enum { i_operation, i_entier, i_appel, i_lire, i_booleen, i_variable, i_fonction } type_exp; // pour le moment une expression  peut-être une opération ou un entier
  union{ 
    n_operation* operation;
    int valeur;
    n_appel* appel;
    n_lire* lire;
    n_variable* variable;
    type t_type;
    char* booleen;
  }u;
};

struct n_operation{
    enum { o_diff, o_supEgal, o_infEgal, o_egal, o_simple, o_non, o_et, o_ou } type_operat;
  char type_operation;
  n_exp* exp1;
  n_exp* exp2;
};

struct n_variable{
    type t_type;
    char* nom;
};

struct n_lire{
    // aucun champ pour le moment
};

struct n_l_exp{
    n_exp* exp;
    struct n_l_exp* suivant;
};

struct n_appel{
    int type;
    char* nom;
    n_l_exp* arguments;
};

struct n_declaration{
    type t_type;
    n_variable* variable;
};

struct n_affectation {
    n_variable *variable;
    n_exp *exp;
};

struct n_decla_aff{
    n_instruction * declaration;
    n_instruction * affectation;
};

struct n_conditionnelle{
    n_exp* condition;
    n_l_instructions* instructions_si;
    n_instruction* liste_sinon_si;
    n_l_instructions* liste_sinon;
};

struct n_boucle_tantque{
    n_exp* condition;
    n_l_instructions* instructions;
};

struct n_retour{
    n_exp* exp;
};

struct n_l_fonctions{
    n_fonction* fonction;
    n_l_fonctions* suivant;
};

struct n_fonction{
    type t_type;
    char* nom;
    n_l_parametres* parametres;
    n_l_instructions* instructions;
};

struct n_l_parametres{
    n_parametre* parametre;
    n_l_parametres* suivant;
};

struct n_parametre{
    type t_type;
    char* nom;
};


void afficher_n_programme(n_programme* prog,int indent);
void afficher_n_l_instructions(n_l_instructions* instructions ,int indent);
void afficher_n_instruction(n_instruction* instruction ,int indent);
void afficher_n_ecrire(n_ecrire* ecrire,int indent);
void afficher_n_exp(n_exp* exp ,int indent);
void afficher_n_operation(n_operation* operation ,int indent);
void afficher_n_variable(n_variable* variable ,int indent);
void afficher_n_lire(int indent);
void afficher_n_l_exp(n_l_exp* l_exp ,int indent);
void afficher_n_appel(n_appel* appel ,int indent);
void afficher_n_booleen(n_exp* booleen ,int indent);
void afficher_n_declaration(n_exp* declaration ,int indent);
void afficher_n_affectation(n_affectation* affectation ,int indent);

void afficher_n_l_fonctions(n_l_fonctions* fonctions ,int indent);
void afficher_n_fonction(n_fonction* fonction ,int indent);
void afficher_n_l_parametres(n_l_parametres* parametres ,int indent);
void afficher_n_parametre(n_parametre* parametre ,int indent);

n_programme* creer_n_programme(n_l_fonctions* fonctions ,n_l_instructions* instructions);
n_l_instructions* creer_n_l_instructions(n_instruction* instruction ,n_l_instructions* instructions);

n_instruction* creer_n_ecrire(n_exp* exp);
n_exp* creer_n_entier(int valeur);
n_exp* creer_n_operation(char type_operation, n_exp* exp1, n_exp* exp2);
n_exp* creer_n_variable(char* nom);
n_exp* creer_n_lire();
n_l_exp* creer_n_l_exp(n_exp* exp, n_l_exp* suivant);
n_exp* creer_n_appel(char* nom, n_l_exp* arguments);
n_exp* creer_n_booleen(int valeur);

n_exp* creer_n_operation_infeg(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_supeg(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_egal(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_diff(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_ou(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_et(n_exp* exp1,n_exp* exp2);
n_exp* creer_n_operation_non(n_exp* exp1);

n_instruction* creer_n_declaration(n_exp* variable, type t_type);
n_instruction* creer_n_affectation(n_exp* variable, n_exp* exp);
n_instruction* creer_n_decla_aff(n_instruction *declaration, n_instruction *affectation);
n_instruction* creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
n_instruction* creer_n_boucle_tantque(n_exp* condition, n_l_instructions* instructions);
n_instruction* creer_n_retour(n_exp* exp);
n_instruction* creer_n_appelF(char* nom, n_l_exp* arguments);

n_l_fonctions* creer_n_l_fonctions(n_fonction* fonction, n_l_fonctions* suivant);
n_fonction* creer_n_fonction(type t_type, char* nom, n_l_parametres* parametres, n_l_instructions* instructions);
n_l_parametres* creer_n_l_parametres(n_parametre* parametre, n_l_parametres* suivant);
n_parametre* creer_n_parametre(type t_type, char* nom);

#endif
