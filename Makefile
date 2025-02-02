#INPUT = $(shell ls input | sed 's/\.flo//g')
INPUT = non testrandom
#arithmetique declaration testrandom Si SiSinon SiSinonSiSinon SinonSi addition-multiplication-division

assembleur_vers_exercutable: main generation_code_nasm
	for a in $(INPUT); do echo "Assemblage: " $${a}; nasm -f elf -g -F dwarf output/$${a}.nasm; ld -m elf_i386 -o output/$${a} output/$${a}.o; rm output/$${a}.o; done;

generation_code_nasm:
	for a in $(INPUT); do echo "Generation code nasm: " $${a}; ./main -n input/$${a}.flo > output/$${a}.nasm; done;

main: analyse_lexicale analyse_syntaxique
	gcc -Wall main.c analyse_lexicale.c analyse_syntaxique.c arbre_abstrait.c generation_code.c table_symbole.c -o main
analyse_syntaxique :
	bison analyse_syntaxique.y --defines=symboles.h -o analyse_syntaxique.c
analyse_lexicale:
	flex -o analyse_lexicale.c analyse_lexicale.l
	
