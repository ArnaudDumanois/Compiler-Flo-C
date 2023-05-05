%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	push	0
	pop	eax
	cmp	eax, 1		 ;  on verifie la condition
	je	if0		 ; on saute au si
	jmp	endif0		 ; on saute au prochain endif
	if0:		 ; on entre dans le si
	push	0
	pop	eax
	call	iprintLF
	jmp	else		 ; on saute au sinon
	endif0:		 ; on entre dans le endif
	push	0
	pop	eax
	cmp	eax, 1		 ;  on verifie la condition
	je	if1		 ; on saute au si
	jmp	endif1		 ; on saute au prochain endif
	if1:		 ; on entre dans le si
	push	1
	pop	eax
	call	iprintLF
	jmp	else		 ; on saute au sinon
	endif1:		 ; on entre dans le endif
	push	1
	pop	eax
	cmp	eax, 1		 ;  on verifie la condition
	je	if2		 ; on saute au si
	jmp	endif2		 ; on saute au prochain endif
	if2:		 ; on entre dans le si
	push	2
	pop	eax
	call	iprintLF
	jmp	else		 ; on saute au sinon
	endif2:		 ; on entre dans le endif
	push	1
	pop	eax
	cmp	eax, 1		 ;  on verifie la condition
	je	if3		 ; on saute au si
	jmp	endif3		 ; on saute à la fin
	if3:		 ; on entre dans le si
	push	3
	pop	eax
	call	iprintLF
	endif3:		 ; on saute à la fin
	else:		 ;  on entre dans le sinon
	else:		 ;  on entre dans le sinon
	else:		 ;  on entre dans le sinon
	mov	eax, 1		 ; 1 est le code de SYS_EXIT
	int	0x80		 ; exit
