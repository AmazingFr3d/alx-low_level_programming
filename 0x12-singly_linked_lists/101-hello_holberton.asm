section .data
	hello db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	; Push the address of the hello string onto the stack
	lea rdi, [hello]
	mov rsi, 0
	mov rdx, 0
	mov rcx, 0
	call printf

	; Push the format string onto the stack
	lea rdi, [format]
	xor rsi, rsi
	xor rdx, rdx
	xor rcx, rcx
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
