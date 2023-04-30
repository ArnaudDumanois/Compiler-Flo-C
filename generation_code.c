#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre_abstrait.h"
#include "generation_code.h"

//pour afficher le code uniquement si l'option afficher_nasm vaut 1
#define printifm(format, ...) if(afficher_nasm){ printf(format, __VA_ARGS__); }

int afficher_nasm = 1;

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

void nasm_instruction(n_instruction* n){
	if(n->type_instruction == i_ecrire){
		nasm_exp(n->u.exp);
		nasm_commande("pop", "eax", NULL, NULL, NULL); //on dépile la valeur d'expression sur eax
		nasm_commande("call", "iprintLF", NULL, NULL, NULL); //on envoie la valeur d'eax sur la sortie standard
	}
}

void nasm_exp(n_exp* n){
	if (n->type_exp == i_operation){
		nasm_operation(n->u.operation);
	} else if (n->type_exp == i_entier || n->type_exp == i_booleen){
        char buffer[10];
        sprintf(buffer, "%d", n->u.valeur);
        nasm_commande("push", buffer, NULL, NULL, NULL) ;
	}
}

void nasm_operation(n_operation* n){
    // cas des opération unaire
    if (n->exp2 == NULL) {
        nasm_exp(n->exp1);
        nasm_commande("pop", "eax", NULL, NULL, "depile la permière operande dans eax");
        if (n->type_operat == o_non){
            /*nasm_commande("mov","ebx","1",NULL,"met 1 dans ebx");
            nasm_commande("xor","eax","ebx",NULL,"effectue l'opération");
          */nasm_commande("not", "eax", NULL, NULL, "effectue l'opération");
            nasm_commande("add", "eax", "2", NULL, "effectue l'opération"); // on ajoute 2 car not renvoie 0 ou 1
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
