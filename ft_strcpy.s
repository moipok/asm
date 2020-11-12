global _ft_strcpy

section .text
_ft_strcpy: 
	xor rax, rax
	test rsi, rsi
	jz error
	test rdi, rdi
	jz error
loop:
	cmp byte[rsi + rax], 0
	jz re
	mov bh, byte[rsi + rax]
	mov byte[rdi + rax], bh
	inc rax
	jmp loop
re:
	mov byte[rdi + rax], 0
	mov rax, rdi
	ret
error:
	mov	rax, 0
	ret
