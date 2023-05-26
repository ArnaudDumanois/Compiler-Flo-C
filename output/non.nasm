%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	push	42
	pop	eax
	call	iprintLF
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	pop	eax		 ; depile la permière operande dans eax
