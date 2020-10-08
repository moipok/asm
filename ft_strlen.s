global _ft_strlen

section .text
_ft_strlen: 
	xor rax, rax
	test rdi, rdi
	jz re			
loop:
	cmp byte[rdi + rax], 0
	jz re
	inc rax
	jmp loop
re:
	ret