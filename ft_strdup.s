global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

segment .text
_ft_strdup:
	call	_ft_strlen	; str -> rdi
	add		rax, 1		; rax = ft_strlen(str) + '\0'
	push	rdi			; rdi -> save
	mov		rdi, rax	; rdi = rax
	call	_malloc		; rax = [... ... ...]
	pop		r9			; r9 = str
	mov		rsi, r9		; rsi = [.. .. ... ..]
	mov		rdi, rax	; rdi = str
	call	_ft_strcpy	; ft_strcpy(str, rdi(malloc))
	ret					; return str(new)