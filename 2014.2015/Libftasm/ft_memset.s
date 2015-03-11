segment .text
	global _ft_memset

_ft_memset:
	mov		rcx, rdx
	mov		rax, rsi
	mov		rbx, rdi
	rep		stosb
	mov		rax, rbx
	ret
