//
// Created by arnau on 02/06/2023.
//

#ifndef COMPILER_FLO_C_TABLE_SYMBOLE_H
#define COMPILER_FLO_C_TABLE_SYMBOLE_H

#include "arbre_abstrait.h"

#define TAILLE_TABLE_SYMBOLES 1000000
//typedef enum { t_entier, t_boolean } type;
typedef struct symbole symbole;
typedef struct table_symboles table_symboles;
typedef struct list_type list_type;

struct symbole{
    type type;
    char* nom;
    // adresse
    int adresse;
    // imbrication
    int imbrication;
    // nombre de paramètres
    int nbParametres;
    // liste des types des paramètres
    list_type* listeParametres;
    int estFonction;
    struct symbole* suivant;
};

struct table_symboles{
    symbole* symboles;
    int taille;
};

struct list_type{
    type type;
    struct list_type* suivant;
};


symbole* creer_symbole(type type, char* nom, int adresse, int imbrication);

table_symboles* creer_table_symboles();
symbole *ajouter_table_symboles(table_symboles* table,  type type, char* nom, int adresse, int imbrication  );
symbole *chercher_table_symboles(table_symboles* table, char* nom);

int nombre_parametres(n_l_parametres *listeParametres);
int nombre_parametres_list_type(n_l_exp *listeParametres);
list_type* creer_list_type(n_l_parametres *listeParametres);
symbole *ajouter_table_symboles_fonction(table_symboles* table,  type type, char* nom, int adresse, int imbrication, int nbParametres, list_type* listeParametres);


void afficher_table_symboles(table_symboles* table);



#endif

