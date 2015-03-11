segment .text
	global _ft_toupper

_ft_toupper:
	mov rax,rdi
	cmp rdi,97
	jl false
	cmp rdi, 122
	jg false

true:
	sub rax,32
	jmp done

false:
	jmp done

done:
	ret
