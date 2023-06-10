//
// Created by arnau on 02/06/2023.
//

#include "table_symbole.h"
#include "arbre_abstrait.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAILLE_TABLE_SYMBOLES 1000000

symbole* creer_symbole(type type, char* nom, int adresse, int imbrication){
    symbole* symbole = malloc(sizeof(symbole));
    symbole->type = type;
    symbole->nom = nom;
    symbole->adresse = adresse;
    symbole->imbrication = imbrication;
    printf("Symbole créer, nom : %s, type : %d, adresse : %d, imbrication : %d\n", symbole->nom, symbole->type, symbole->adresse, symbole->imbrication);
    return symbole;
}

table_symboles* creer_table_symboles(){
    table_symboles* table = malloc(sizeof(table_symboles));
    table->symboles = NULL;
    table->taille = 0;
    return table;
}


symbole *ajouter_table_symboles(table_symboles* table,  type type, char* nom, int adresse, int imbrication){
    // Vérifier si le symbole existe déjà
    for (int i = 0; i < table->taille; i++) {
        if (strcmp(table->symboles[i].nom, nom) == 0) {
            printf("Erreur : Le symbole %s existe déjà dans la table des symboles.\n", nom);
            exit(1);
        }
    }
    // Allouer de la mémoire pour le nouveau symbole
    symbole* nouveauSymbole = (symbole*) malloc(sizeof(symbole));
    nouveauSymbole->nom = nom;
    nouveauSymbole->type = type;
    nouveauSymbole->adresse = adresse;
    nouveauSymbole->imbrication = imbrication;
    nouveauSymbole->estFonction = 0;
    nouveauSymbole->nbParametres = 0;
    nouveauSymbole->listeParametres = NULL;
    // Réallouer la mémoire pour agrandir la table des symboles
    table->taille++;
    table->symboles = (symbole*) realloc(table->symboles, table->taille * sizeof(symbole));
    table->symboles[table->taille - 1] = *nouveauSymbole;
    return nouveauSymbole;
}

symbole *chercher_table_symboles(table_symboles* table, char* nom){
    for (int i = 0; i < table->taille; i++) {
        if (strcmp(table->symboles[i].nom, nom) == 0) {
            return &(table->symboles[i]);
        }
    }
    perror("Erreur : Le symbole n'existe pas dans la table des symboles.\n");
    exit(1);
}

void afficher_table_symboles(table_symboles* table){
    printf("Table des symboles :\n");
    for (int i = 0; i < table->taille; i++) {
        printf("Symbole %d : nom : %s, type : ", i, table->symboles[i].nom);
        if (table->symboles[i].type == t_entier) {
            printf("entier, ");
        } else if (table->symboles[i].type == t_booleen) {
            printf("boolean, ");
        }
        printf("adresse : %d, imbrication : %d, ", table->symboles[i].adresse, table->symboles[i].imbrication);
        if (table->symboles[i].estFonction == 0) {
            printf("estFonction : false\n");
        } else {
            printf("estFonction : true, nbParametres : %d, ", table->symboles[i].nbParametres);
            while (table->symboles[i].listeParametres != NULL) {
                if (table->symboles[i].listeParametres->type == t_entier) {
                    printf("type : entier, ");
                } else if (table->symboles[i].listeParametres->type == t_booleen) {
                    printf("type : boolean, ");
                }
                table->symboles[i].listeParametres = table->symboles[i].listeParametres->suivant;
            }
            printf("\n");
        }
    }

}

list_type *creer_list_type(n_l_parametres *listeParametres) {
    struct list_type* tete = NULL;
    struct list_type* courant = NULL;

    while (listeParametres != NULL) {
        struct list_type* nouvelElement = malloc(sizeof(struct list_type));
        nouvelElement->type = listeParametres->parametre->t_type;
        nouvelElement->suivant = NULL;

        if (tete == NULL) {
            tete = nouvelElement;
            courant = nouvelElement;
        } else {
            courant->suivant = nouvelElement;
            courant = nouvelElement;
        }

        listeParametres = listeParametres->suivant;
    }

    return tete;
}

symbole *ajouter_table_symboles_fonction(table_symboles* table,  type type, char* nom, int adresse, int imbrication, int nbParametres, list_type* listeParametres) {
    // Vérifier si le symbole existe déjà
    for (int i = 0; i < table->taille; i++) {
        if (strcmp(table->symboles[i].nom, nom) == 0) {
            printf("Erreur : Le symbole %s existe déjà dans la table des symboles.\n", nom);
            exit(1);
        }
    }
    // Allouer de la mémoire pour le nouveau symbole
    symbole* nouveauSymbole = (symbole*) malloc(sizeof(symbole));
    nouveauSymbole->nom = nom;
    nouveauSymbole->type = type;
    nouveauSymbole->adresse = adresse;
    nouveauSymbole->imbrication = imbrication;
    nouveauSymbole->estFonction = 1;
    nouveauSymbole->nbParametres = nbParametres;
    nouveauSymbole->listeParametres = listeParametres;
    // Réallouer la mémoire pour agrandir la table des symboles
    table->taille++;
    table->symboles = (symbole*) realloc(table->symboles, table->taille * sizeof(symbole));
    table->symboles[table->taille - 1] = *nouveauSymbole;
    return nouveauSymbole;
}

int nombre_parametres(n_l_parametres *listeParametres) {
    int nbParametres = 0;
    while (listeParametres != NULL) {
        nbParametres++;
        listeParametres = listeParametres->suivant;
    }
    return nbParametres;
}
