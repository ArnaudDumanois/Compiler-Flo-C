%include	'io.asm'

section	.bss
sinput:	resb	255	;reserve a 255 byte space in memory for the users input string

section	.text
	global _start
_start:
	push	42
	pop	eax
	call	iprintLF
	push	0
	push	42
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	push	7
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	7
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	push	7
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	11
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	6
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	7
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	8
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	9
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	10
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	imul	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	6
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	7
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	8
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	9
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	10
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	push	3
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	4
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	mov	edx, 0		 ; met 0 dans edx
	idiv	ebx		 ; effectue l'opération
	mov	eax, edx		 ; met le reste dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
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
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
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
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	3
	push	4
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	push	5
	push	6
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setle	al		 ; met 1 dans al si eax <= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setle	al		 ; met 1 dans al si eax <= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setle	al		 ; met 1 dans al si eax <= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setge	al		 ; met 1 dans al si eax >= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setge	al		 ; met 1 dans al si eax >= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setge	al		 ; met 1 dans al si eax >= ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	sete	al		 ; met 1 dans al si eax == ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	sete	al		 ; met 1 dans al si eax == ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	sete	al		 ; met 1 dans al si eax == ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setne	al		 ; met 1 dans al si eax != ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setne	al		 ; met 1 dans al si eax != ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	2
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setne	al		 ; met 1 dans al si eax != ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	1
	pop	eax
	call	iprintLF
	push	0
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
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
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
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
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	1
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	0
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	5
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	5
	push	5
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
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
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
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
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	2
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
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
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setl	al		 ; met 1 dans al si eax < ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
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
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	push	2
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	cmp	eax, ebx		 ; compare les deux opérandes
	setg	al		 ; met 1 dans al si eax > ebx
	movzx	eax, al		 ; met 0 ou 1 dans eax
	push	eax		 ; empile le résultat
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	42
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	add	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	5
	push	3
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	sub	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	0
	push	0
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	and	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	push	1
	push	1
	pop	ebx		 ; depile la seconde operande dans ebx
	pop	eax		 ; depile la permière operande dans eax
	or	eax, ebx		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax		 ; depile la permière operande dans eax
	not	eax		 ; effectue l'opération
	add	eax, 2		 ; effectue l'opération
	push	eax		 ; empile le résultat
	pop	eax
	call	iprintLF
	mov	eax, 1		 ; 1 est le code de SYS_EXIT
	int	0x80		 ; exit
