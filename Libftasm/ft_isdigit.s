segment .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi,48
	jl false
	cmp rdi,57
	jg false

true:
	mov rax,1
	jmp done

false:
	mov rax,0
	jmp done

done:
	ret
