segment .text
	global _ft_islower

	_ft_islower:
		cmp		rdi, 97
		jl		false
		cmp		rdi, 122
		jg		false
		jmp		true

	false:
		mov		rax, 0
		jmp		done

	true:
		mov		rax, 1
		jmp		done

	done:
		ret
