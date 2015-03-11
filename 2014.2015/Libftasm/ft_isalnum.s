segment .text
	global _ft_isalnum
	extern _ft_isalpha
	extern _ft_isdigit

_ft_isalnum:
	call _ft_isalpha
	cmp rax,1
	je true
	call _ft_isdigit
	cmp rax,1
	je true

false:
	jmp done

true:
	mov rax,1
	jmp done

done:
	ret
