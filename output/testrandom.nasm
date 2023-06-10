%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	sub	esp, 4		 ; on réserve 4 octets pour la variable
	mov	dword [esp], 0		 ; on initialise la variable à 0
	push	1
	pop	eax		 ; on dépile la valeur d'expression sur eax
	mov	dword [esp], eax		 ; on met la valeur de eax dans la variable
	sub	esp, 4		 ; on réserve 4 octets pour la variable
	mov	dword [esp], 0		 ; on initialise la variable à 0
	sub	esp, 4		 ; on réserve 4 octets pour la variable
	mov	dword [esp], 0		 ; on initialise la variable à 0
	push	ebp		 ; on sauvegarde ebp
	mov	ebp, 4		 ; on met l'adresse de la variable dans ebp
	mov	eax, (ebp)		 ; on met la valeur de la variable dans eax
	pop	ebp		 ; on restaure ebp
	push	eax		 ; on empile le résultat
	pop	eax
	call	iprintLF
	mov	eax, 1		 ; 1 est le code de SYS_EXIT
	int	0x80		 ; exit
