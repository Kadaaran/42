segment .text
	global _ft_isupper

_ft_isupper:
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jg false
	jmp true

true:
	mov rax, 1
	jmp done

false:
	mov rax, 0
	jmp done

done:
	ret
