segment .text
	global _ft_tolower

_ft_tolower:
	mov rax,rdi
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jg false

true:
	add rax, 32
	jmp done

false:
	jmp done

done:
	ret
