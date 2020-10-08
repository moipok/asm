global _ft_strcpy

section .text
_ft_strcpy: 
	xor rax, rax
	test rsi, rsi
	jz re
loop:
	cmp byte[rdi + rax], 0
	jz re
	mov bh, byte[rdi + rax]
	mov byte[rsi + rax], bh
	inc rax
	jmp loop
re:
	mov byte[rsi + rax], 0
	mov rax, rsi
	ret
