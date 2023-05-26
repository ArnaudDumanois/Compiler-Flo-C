#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre_abstrait.h"
#include "generation_code.h"

//pour afficher le code uniquement si l'option afficher_nasm vaut 1
#define printifm(format, ...) if(afficher_nasm){ printf(format, __VA_ARGS__); }

int afficher_nasm = 1;
int label_count = 0;
int fin_si_count = 0;

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
  printifm("%s","_start:\n");
  nasm_liste_instructions(n->instructions);

  //pour quitter le programme
  nasm_commande("mov", "eax", "1" , NULL, "1 est le code de SYS_EXIT");
  nasm_commande("int", "0x80", NULL, NULL, "exit");
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
            nasm_commande("sub", "esp", "4", NULL, "on réserve 4 octets pour la variable");
            nasm_commande("mov", "dword [esp]", "0", NULL, "on initialise la variable à 0");
        } else if (n->u.declaration->t_type == t_booleen) {
            nasm_commande("sub", "esp", "4", NULL, "on réserve 4 octets pour la variable");
            nasm_commande("mov", "dword [esp]", "0", NULL, "on initialise la variable à 0");
        }
    } else if (n->type_instruction == i_affectation) {
        if (n->u.affectation->variable->t_type == t_entier) {
            nasm_exp(n->u.affectation->exp);
            nasm_commande("pop", "eax", NULL, NULL, "on dépile la valeur d'expression sur eax");
            nasm_commande("mov", "dword [esp]", "eax", NULL, "on met la valeur de eax dans la variable");
        } else if (n->u.affectation->variable->t_type == t_booleen) {
            nasm_exp(n->u.affectation->exp);
            nasm_commande("pop", "eax", NULL, NULL, NULL);
            nasm_commande("mov", "dword [esp]", "eax", NULL, NULL);
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
        nasm_exp(n->u.conditionnelle->condition);
        nasm_commande("pop", "eax", NULL, NULL, NULL);
        nasm_commande("cmp", "eax", "1", NULL, " on verifie la condition");
        // on crée les labels pour le si et le sinon et la fin
        char label_if[10];
        sprintf(label_if, "if%d", label_count);
        char label_else[10];
        sprintf(label_else, "else%d", label_count);
        char label_elif[10];
        sprintf(label_elif, "elif%d", label_count);
        char label_endif[10];
        sprintf(label_endif, "endif%d", fin_si_count);

        if (n->u.conditionnelle->liste_sinon_si != NULL) {
            nasm_commande("je", label_if, NULL, NULL, "on saute au si");
            nasm_commande("jmp", label_endif, NULL, NULL, "on saute au prochain endif");
            sprintf(label_if, "if%d:", label_count);
            nasm_commande(label_if, NULL, NULL, NULL, "on entre dans le si");
            nasm_liste_instructions(n->u.conditionnelle->instructions_si);
            sprintf(label_else, "else");
            nasm_commande("jmp", label_else, NULL, NULL, "on saute au sinon");
            sprintf(label_endif, "endif%d:", label_count);
            nasm_commande(label_endif, NULL, NULL, NULL, "on entre dans le endif");
            //sprintf(label_else, "else%d:", label_count);
            //nasm_commande(label_else, NULL, NULL, NULL, " on entre dans le sinon");
            label_count++;
            fin_si_count++;
            nasm_instruction(n->u.conditionnelle->liste_sinon_si);
            //fin_si_count++;
            sprintf(label_else, "else:");
            nasm_commande(label_else, NULL, NULL, NULL, " on entre dans le sinon");
            /*if (n->u.conditionnelle->liste_sinon != NULL) {
                nasm_commande(label_else, NULL, NULL, NULL, " on entre dans le sinon");
                nasm_liste_instructions(n->u.conditionnelle->liste_sinon);
            }
            */

            //sprintf(label_endif, "endif%d:", fin_si_count);
            //nasm_commande(label_endif, NULL, NULL, NULL, "on saute à la fin");
        } else if (n->u.conditionnelle->liste_sinon != NULL) {
            nasm_commande("je", label_if, NULL, NULL, "on saute au si");
            nasm_commande("jmp", label_else, NULL, NULL, "on saute au sinon");
            sprintf(label_if, "if%d:", label_count);
            nasm_commande(label_if, NULL, NULL, NULL, "on entre dans le si");
            nasm_liste_instructions(n->u.conditionnelle->instructions_si);
            nasm_commande("jmp", label_endif, NULL, NULL, "on saute à la fin");
            sprintf(label_else, "else%d:", label_count);
            nasm_commande(label_else, NULL, NULL, NULL, " on entre dans le sinon");
            nasm_liste_instructions(n->u.conditionnelle->liste_sinon);
        } else {
            nasm_commande("je", label_if, NULL, NULL, "on saute au si");
            nasm_commande("jmp", label_endif, NULL, NULL, "on saute à la fin");
            sprintf(label_if, "if%d:", label_count);
            nasm_commande(label_if, NULL, NULL, NULL, "on entre dans le si");
            nasm_liste_instructions(n->u.conditionnelle->instructions_si);
            sprintf(label_endif, "endif%d:", fin_si_count);
            nasm_commande(label_endif, NULL, NULL, NULL, "on saute à la fin");
        }
    } else if (n->type_instruction == i_boucle_tantque) {
        char label_while[15];
        sprintf(label_while, "while%d", label_count);
        char label_endwhile[15];
        sprintf(label_endwhile, "endwhile%d", label_count);
        sprintf(label_while, "while%d:", label_count);
        nasm_commande(label_while, NULL, NULL, NULL, "on entre dans le while");
        nasm_exp(n->u.boucle_tantque->condition);
        nasm_commande("pop", "eax", NULL, NULL, NULL);
        nasm_commande("cmp", "eax", "0", NULL, " on verifie la condition");
        nasm_commande("je", label_endwhile, NULL, NULL, "on saute à la fin");
        nasm_liste_instructions(n->u.boucle_tantque->instructions);
        sprintf(label_while, "while%d", label_count);
        nasm_commande("jmp", label_while, NULL, NULL, "on saute au while");
        sprintf(label_endwhile, "endwhile%d:", label_count);
        nasm_commande(label_endwhile, NULL, NULL, NULL, "on sort du while");
        label_count++;
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
            nasm_commande("mov", "edx", "0", NULL, "met 0 dans edx");
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
