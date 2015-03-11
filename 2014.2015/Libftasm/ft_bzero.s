segment .text
	global _ft_bzero

_ft_bzero:
	cmp		rdi,0
	je		end
	mov		rbx,rdi
	xor		rcx,rcx
	jmp		loop

loop:
	cmp		rsi,rcx
	je		end
	mov		byte [rbx],0
	inc		rbx
	inc		rcx
	jmp		loop

end:
	ret
