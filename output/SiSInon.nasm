%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	push	1
	pop	eax
	cmp	eax, 1		 ;  on verifie la condition
	je	if0		 ; on saute au si
	jmp	else0		 ; on saute au sinon
	if0:		 ; on entre dans le si
	push	1
	pop	eax
	call	iprintLF
	else0:		 ;  on entre dans le sinon
	push	2
	pop	eax
	call	iprintLF
	mov	eax, 1		 ; 1 est le code de SYS_EXIT
	int	0x80		 ; exit
