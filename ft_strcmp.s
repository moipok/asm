global _ft_strcmp

section .text
_ft_strcmp: 
	xor 		rcx, rcx ; i = 0
	test		rdi, rdi
	jz			checkfirst
	test		rsi, rsi
	jz			checkfirst
	jmp			loop
checkfirst:
	cmp			rdi, rsi
	jz			ec
	jg			big
	jl			low
loop:
	cmp			byte[rdi + rcx], 0
	je			check
	cmp			byte[rsi + rcx], 0
	je			check
	mov			al, byte[rsi + rcx]
	cmp			byte[rdi + rcx], al
	jne			check
	inc			rcx
	jmp			loop
check:
	mov			al, byte[rdi + rcx]
	sub			al, byte[rsi + rcx]
	cmp			al, 0
	jz			ec
	jl			low
	jg			big
low:
	mov 		rax, -1
	ret
big:
	mov 		rax, 1
	ret
ec:
	mov 		rax, 0
	ret