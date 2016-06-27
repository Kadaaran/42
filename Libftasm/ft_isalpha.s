segment .text
	global _ft_isalpha
	extern _ft_islower
	extern _ft_isupper

_ft_isalpha:
	call _ft_islower
	cmp rax, 1
	je true
	call _ft_isupper
	cmp rax, 1
	je true

false:
	mov rax, 0
	jmp done

true:
	mov rax, 1
	jmp done

done:
	ret
