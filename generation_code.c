#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre_abstrait.h"
#include "generation_code.h"
#include "table_symbole.h"


//pour afficher le code uniquement si l'option afficher_nasm vaut 1
#define printifm(format, ...) if(afficher_nasm){ printf(format, __VA_ARGS__); }

int afficher_nasm = 1;
int label_count_endif = 0;
int label_count_else = 0;
int label_count_elif = 0;
int label_count_while = 0;
int adresse = 0;
int imbrication = 0;
table_symboles *table;

/* fonction locale, permet d'afficher un commentaire */
void nasm_comment(char *comment) {
  if(comment != NULL) {
    printifm("\t\t ; %s", comment);//le point virgule indique le début d'un commentaire en nasm. Les tabulations sont là pour faire jolie.
  }
  printifm("%s","\n");
}

/*
Affiche une commande nasm sur une ligne
Par convention, les derniers opérandes sont nuls si l'opération a moins de 3 arguments.
*/
void nasm_commande(char *opcode, char *op1, char *op2, char *op3, char *comment) {
  printifm("\t%s", opcode);
  if(op1 != NULL) {
    printifm("\t%s", op1);
    if(op2 != NULL) {
      printifm(", %s", op2);
      if(op3 != NULL) {
        printifm(", %s", op3);
      }
    }
  }
  nasm_comment(comment);
}


void nasm_prog(n_programme *n) {
  printifm("%%include\t'%s'\n","io.asm");
  printifm("%s","\nsection\t.bss\n");
  printifm("%s", "sinput:\tresb\t255\t;reserve a 255 byte space in memory for the users input string\n");
  printifm("%s","\nsection\t.text\n");
  printifm("%s","\tglobal _start\n");

  if (n->fonctions != NULL){
      nasm_liste_fonctions(n->fonctions);
  }

  printifm("%s","_start:\n");

  if (n->instructions != NULL){
    nasm_liste_instructions(n->instructions);
  }

  //pour quitter le programme
  nasm_commande("mov", "eax", "1" , NULL, "1 est le code de SYS_EXIT");
  nasm_commande("int", "0x80", NULL, NULL, "exit");
}

void nasm_liste_fonctions(n_l_fonctions *n) {
    do {
        if (n->fonction != NULL){
            nasm_fonction(n->fonction);
            imbrication--;
        }
        n = n->suivant;
    } while(n != NULL );
}

void nasm_fonction(n_fonction *n) {
    imbrication++;
    adresse += 4*nombre_parametres(n->parametres);
    ajouter_table_symboles_fonction(table, n->t_type, n->nom, adresse, imbrication, nombre_parametres(n->parametres),
                                    creer_list_type(n->parametres));
        while (n->parametres != NULL){
        if (n->parametres->parametre != NULL){
            ajouter_table_symboles(table, n->parametres->parametre->t_type, n->parametres->parametre->nom, adresse, imbrication);
            adresse += 4;
        }
        n->parametres = n->parametres->suivant;
    }
    printifm("_%s:\n", n->nom);
    char nm_params[10];
    sprintf(nm_params, "%d", adresse);
    if (nombre_parametres(n->parametres) > 0){
        nasm_commande("push", "ebp", NULL, NULL, "on empile ebp");
        nasm_commande("mov", "ebp", "esp", NULL, "on met esp dans ebp");
        nasm_commande("sub", "esp", nm_params, NULL, "on réserve de la place pour les paramètres");
    }
    //nasm_commande("push", "ebp", NULL, NULL, "on empile ebp");
    //nasm_commande("mov", "ebp", "esp", NULL, "on met esp dans ebp");
    //nasm_commande("sub", "esp", nm_params, NULL, "on réserve de la place pour les paramètres");
    nasm_liste_instructions(n->instructions);
}

void nasm_liste_instructions(n_l_instructions *n) {
	do {
		if (n->instruction != NULL){
			nasm_instruction(n->instruction);
		}
		n = n->instructions;
	} while(n != NULL );
}

void nasm_instruction(n_instruction* n) {
    if (n->type_instruction == i_ecrire) {
        nasm_exp(n->u.exp);
        nasm_commande("pop", "eax", NULL, NULL, NULL); //on dépile la valeur d'expression sur eax
        nasm_commande("call", "iprintLF", NULL, NULL, NULL); //on envoie la valeur d'eax sur la sortie standard
    } else if (n->type_instruction == i_declaration) {
        if (n->u.declaration->t_type == t_entier) {
            ajouter_table_symboles(table, t_entier, n->u.declaration->variable->nom, adresse, imbrication);
            adresse += 4;
            nasm_commande("sub", "esp", "4", NULL, "on réserve 4 octets pour la variable");
            nasm_commande("mov", "dword [esp]", "0", NULL, "on initialise la variable à 0");
        } else if (n->u.declaration->t_type == t_booleen) {
            adresse += 4;
            ajouter_table_symboles(table, t_booleen, n->u.declaration->variable->nom, adresse, imbrication);
            nasm_commande("sub", "esp", "4", NULL, "on réserve 4 octets pour la variable");
            nasm_commande("mov", "dword [esp]", "0", NULL, "on initialise la variable à 0");
        }
    } else if (n->type_instruction == i_affectation) {
        if (n->u.affectation->variable->t_type == t_entier) {
            if (chercher_table_symboles(table, n->u.affectation->variable->nom) != NULL) {
                nasm_exp(n->u.affectation->exp);
                nasm_commande("pop", "eax", NULL, NULL, "on dépile la valeur d'expression sur eax");
                nasm_commande("mov", "dword [esp]", "eax", NULL, "on met la valeur de eax dans la variable");
            } else {
                printf("Erreur : la variable %s n'est pas déclarée\n", n->u.affectation->variable->nom);
            }
        } else if (n->u.affectation->variable->t_type == t_booleen) {
            if (chercher_table_symboles(table, n->u.affectation->variable->nom) != NULL) {
                nasm_exp(n->u.affectation->exp);
                nasm_commande("pop", "eax", NULL, NULL, "on dépile la valeur d'expression sur eax");
                nasm_commande("mov", "dword [esp]", "eax", NULL, "on met la valeur de eax dans la variable");
            } else {
                printf("Erreur : la variable %s n'est pas déclarée\n", n->u.affectation->variable->nom);
            }
        }
    } else if (n->type_instruction == i_decla_aff) {
        if (n->u.decla_aff->declaration->u.declaration->t_type == t_entier && n->u.decla_aff->affectation->u.affectation->variable->t_type == t_entier) {
            nasm_instruction(n->u.decla_aff->declaration);
            nasm_instruction(n->u.decla_aff->affectation);
        } else if (n->u.decla_aff->declaration->u.declaration->t_type == t_booleen&& n->u.decla_aff->affectation->u.affectation->variable->t_type == t_booleen) {
            nasm_instruction(n->u.decla_aff->declaration);
            nasm_instruction(n->u.decla_aff->affectation);
        }

    } else if (n->type_instruction == i_conditionnelle) {

        // on crée les labels pour le si et le sinon et la fin
        char label_else[12];
        char label_elif[12];
        char label_endif[12];

        if(n->u.conditionnelle->instructions_si != NULL){
            nasm_exp(n->u.conditionnelle->condition);
            nasm_commande("pop", "eax", NULL, NULL, NULL);
            nasm_commande("cmp", "eax", "1", NULL, " on verifie la condition");

            if(n->u.conditionnelle->liste_sinon_si == NULL){
                if(n->u.conditionnelle->liste_sinon == NULL){
                    sprintf(label_endif, "endif%d", label_count_endif);
                    nasm_commande("jne", label_endif, NULL, NULL, "on saute au prochain endif");
                    nasm_liste_instructions(n->u.conditionnelle->instructions_si);
                }
                else {
                    sprintf(label_else, "else%d", label_count_else);
                    nasm_commande("jne", label_else, NULL, NULL, "on saute au prochain sinon");
                    nasm_liste_instructions(n->u.conditionnelle->instructions_si);
                    sprintf(label_endif, "endif%d", label_count_endif);
                    nasm_commande("jmp", label_endif, NULL, NULL, "on saute au prochain endif");
                }
            }
            else {
                sprintf(label_elif, "elif%d", label_count_elif);
                nasm_commande("jne", label_elif, NULL, NULL, "on saute au prochain sinon si");
                nasm_liste_instructions(n->u.conditionnelle->instructions_si);
                sprintf(label_endif, "endif%d", label_count_endif);
                nasm_commande("jmp", label_endif, NULL, NULL, "on saute au prochain endif");

                while(n->u.conditionnelle->liste_sinon_si != NULL &&
                                            n->u.conditionnelle->liste_sinon_si->instruction->u.conditionnelle->instructions_si != NULL){
                    sprintf(label_elif, "elif%d:", label_count_elif++);
                    nasm_commande(label_elif, NULL, NULL, NULL, "on pose le label du prochain sinon si");

                    nasm_exp(n->u.conditionnelle->liste_sinon_si->instruction->u.conditionnelle->condition);
                    nasm_commande("pop", "eax", NULL, NULL, NULL);
                    nasm_commande("cmp", "eax", "1", NULL, " on verifie la condition");

                    if(n->u.conditionnelle->liste_sinon_si->instructions != NULL){ // si le prochain est un elif
                        sprintf(label_elif, "elif%d", label_count_elif);
                        nasm_commande("jne", label_elif, NULL, NULL, "on saute au prochain sinon si");
                    }
                    else if(n->u.conditionnelle->liste_sinon) {
                        sprintf(label_else, "else%d", label_count_else);
                        nasm_commande("jne", label_else, NULL, NULL, "on saute à la fin");
                    }
                    else {
                        sprintf(label_endif, "endif%d", label_count_endif);
                        nasm_commande("jne", label_endif, NULL, NULL, "on saute au prochain endif");
                    }
                    nasm_liste_instructions(n->u.conditionnelle->liste_sinon_si->instruction->u.conditionnelle->instructions_si);
                    sprintf(label_endif, "endif%d", label_count_endif);
                    nasm_commande("jmp", label_endif, NULL, NULL, "on saute au prochain endif");

                    n->u.conditionnelle->liste_sinon_si = n->u.conditionnelle->liste_sinon_si->instructions;
                }
            }
            if(n->u.conditionnelle->liste_sinon){
                sprintf(label_else, "else%d:", label_count_else++);
                nasm_commande(label_else, NULL, NULL, NULL, "on pose le label du prochain sinon");
                nasm_liste_instructions(n->u.conditionnelle->liste_sinon);
            }
            sprintf(label_endif, "endif%d:", label_count_endif++);
            nasm_commande(label_endif,NULL, NULL, NULL, "on saute à la fin");
        }
    } else if (n->type_instruction == i_boucle_tantque) {
        char label_while[15];
        sprintf(label_while, "while%d", label_count_while);
        char label_endwhile[15];
        sprintf(label_endwhile, "endwhile%d", label_count_while);
        sprintf(label_while, "while%d:", label_count_while);
        nasm_commande(label_while, NULL, NULL, NULL, "on entre dans le while");
        nasm_exp(n->u.boucle_tantque->condition);
        nasm_commande("pop", "eax", NULL, NULL, NULL);
        nasm_commande("cmp", "eax", "0", NULL, " on verifie la condition");
        nasm_commande("je", label_endwhile, NULL, NULL, "on saute à la fin");
        nasm_liste_instructions(n->u.boucle_tantque->instructions);
        sprintf(label_while, "while%d", label_count_while);
        nasm_commande("jmp", label_while, NULL, NULL, "on saute au while");
        sprintf(label_endwhile, "endwhile%d:", label_count_while);
        nasm_commande(label_endwhile, NULL, NULL, NULL, "on sort du while");
        label_count_while++;
    } else if (n->type_instruction == i_retour) {
        nasm_exp(n->u.retour->exp);
        nasm_commande("pop", "eax", NULL, NULL, NULL);
        nasm_commande("ret", NULL, NULL, NULL, "on retourne");
    } else if (n->type_instruction == i_appelF) {
        char buffer[10];
        sprintf(buffer, "_%s", n->u.appelF->nom);
        nasm_commande("push","ebp", NULL, NULL, "on sauvegarde ebp");
        while (n->u.appelF->arguments != NULL) {
            nasm_exp(n->u.appelF->arguments->exp);
            n->u.appelF->arguments = n->u.appelF->arguments->suivant;
        }
        nasm_commande("call", buffer, NULL, NULL, "on appelle la fonction");
        nasm_commande("pop", "ebp", NULL, NULL, "on restaure ebp");
    }
}

void nasm_exp(n_exp* n){
	if (n->type_exp == i_operation){
		nasm_operation(n->u.operation);
	} else if (n->type_exp == i_entier || n->type_exp == i_booleen){
        char buffer[10];
        sprintf(buffer, "%d", n->u.valeur);
        nasm_commande("push", buffer, NULL, NULL, NULL) ;
	} else if (n->type_exp == i_lire) {
        nasm_commande("mov", "eax", "sinput", NULL, "on met l'adresse de sinput dans eax");
        nasm_commande("call", "readline", NULL, NULL, "on appelle readline");
        nasm_commande("call", "atoi", NULL, NULL, "on convertit la chaine en entier");
        nasm_commande("push", "eax", NULL, NULL, "on empile le résultat");
    } else if (n->type_exp == i_appel) {
        char buffer[10];
        sprintf(buffer, "_%s", n->u.appel->nom);
        if (n->u.appel->arguments != NULL) {
            if (chercher_table_symboles(table, n->u.appel->nom) != NULL) {
                nasm_commande("mov", "ebp", "esp", NULL, "on met esp dans ebp");
            } else {
                perror("Erreur : la fonction n'existe pas");
            }
        }
        if (chercher_table_symboles(table, n->u.appel->nom) != NULL) {
            nasm_commande("push", "ebp", NULL, NULL, "on sauvegarde ebp");
            nasm_commande("call", buffer, NULL, NULL, "on appelle la fonction");
            nasm_commande("push", "eax", NULL, NULL, "on empile le résultat");
        } else {
            perror("Erreur : la fonction n'existe pas");
        }
    } else if (n->type_exp == i_variable) {
        if (chercher_table_symboles(table, n->u.variable->nom) != NULL) {
            char buffer[10];
            // si l'adresse de la variable est superieur à ebp
            if (chercher_table_symboles(table, n->u.variable->nom)->adresse > 0) {
                sprintf(buffer, "[ebp + %d]", chercher_table_symboles(table, n->u.variable->nom)->adresse);
                nasm_commande("mov", "eax", buffer, NULL, "on met la valeur de la variable dans eax");
                nasm_commande("push", "eax", NULL, NULL, "on empile la valeur de la variable");
            } else {
                sprintf(buffer, "[ebp%d]", chercher_table_symboles(table, n->u.variable->nom)->adresse);
                //nasm_commande("push", buffer, NULL, NULL, "on empile l'adresse de la variable");
                nasm_commande("mov", "eax", buffer, NULL, "on met la valeur de la variable dans eax");
                nasm_commande("push", "eax", NULL, NULL, "on empile la valeur de la variable");
            }

        } else {
            fprintf(stderr, "erreur de compilation : variable %s non déclarée\n", n->u.variable->nom);
            exit(1);
        }
    }
}

void nasm_operation(n_operation* n){
    // cas des opération unaire
    if (n->exp2 == NULL) {
        nasm_exp(n->exp1);
        nasm_commande("pop", "eax", NULL, NULL, "depile la permière operande dans eax");
        if (n->type_operat == o_non && n->exp1->u.t_type == t_booleen) {
            /*nasm_commande("mov","ebx","1",NULL,"met 1 dans ebx");
            nasm_commande("xor","eax","ebx",NULL,"effectue l'opération");
          */nasm_commande("not", "eax", NULL, NULL, "effectue l'opération");
            nasm_commande("add", "eax", "2", NULL, "effectue l'opération"); // on ajoute 2 car not renvoie 0 ou 1
        } else {
            fprintf(stderr, "erreur de type\n");
            exit(1);
        }
        nasm_commande("push", "eax", NULL, NULL, "empile le résultat");
    } else {
        nasm_exp(n->exp1);
        nasm_exp(n->exp2);
        nasm_commande("pop", "ebx", NULL, NULL, "depile la seconde operande dans ebx");
        nasm_commande("pop", "eax", NULL, NULL, "depile la permière operande dans eax");
        if (n->type_operation == '+') {
            nasm_commande("add", "eax", "ebx", NULL, "effectue l'opération");
        } else if (n->type_operation == '*') {
            nasm_commande("imul", "ebx", NULL, NULL, "effectue l'opération");
        } else if (n->type_operation == '-') {
            nasm_commande("sub", "eax", "ebx", NULL, "effectue l'opération");
        } else if (n->type_operation == '/') {
            //nasm_commande("mov", "edx", "0", NULL, "met 0 dans edx");
            nasm_commande("cdq", NULL, NULL, NULL, "met edx à 0 si eax positif, -1 sinon");
            nasm_commande("idiv", "ebx", NULL, NULL, "effectue l'opération");
        } else if (n->type_operation == '%') {
            nasm_commande("mov", "edx", "0", NULL, "met 0 dans edx");
            nasm_commande("idiv", "ebx", NULL, NULL, "effectue l'opération");
            nasm_commande("mov", "eax", "edx", NULL, "met le reste dans eax");
        } else if (n->type_operation == '<') {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("setl", "al", NULL, NULL, "met 1 dans al si eax < ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        } else if (n->type_operation == '>') {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("setg", "al", NULL, NULL, "met 1 dans al si eax > ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        }
            // assembly for inferior or equal
        else if (n->type_operat == o_infEgal) {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("setle", "al", NULL, NULL, "met 1 dans al si eax <= ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        }
            // assembly for superior or equal
        else if (n->type_operat == o_supEgal) {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("setge", "al", NULL, NULL, "met 1 dans al si eax >= ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        }
            // assembly for equal
        else if (n->type_operat == o_egal) {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("sete", "al", NULL, NULL, "met 1 dans al si eax == ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        }
            // assembly for different
        else if (n->type_operat == o_diff) {
            nasm_commande("cmp", "eax", "ebx", NULL, "compare les deux opérandes");
            nasm_commande("setne", "al", NULL, NULL, "met 1 dans al si eax != ebx");
            nasm_commande("movzx", "eax", "al", NULL, "met 0 ou 1 dans eax");
        }
            // assembly for and
        else if (n->type_operat == o_et) {
            nasm_commande("and", "eax", "ebx", NULL, "effectue l'opération");
        }
            // assembly for or
        else if (n->type_operat == o_ou) {
            nasm_commande("or", "eax", "ebx", NULL, "effectue l'opération");
        }
        nasm_commande("push", "eax", NULL, NULL, "empile le résultat");
    }
}
