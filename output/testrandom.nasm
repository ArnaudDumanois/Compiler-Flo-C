%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	mov	eax, 1		 ; 1 est le code de SYS_EXIT
	int	0x80		 ; exit
