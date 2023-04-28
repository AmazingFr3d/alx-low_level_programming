section .data
	hello db "Hello, Holberton",0
	format db "%s\n",0

section .text
	global main

main:
	; prepare arguments for printf function call
	push qword format
	push qword hello
	call printf

	; clean up the stack
	add rsp, 16

	; exit the program
	mov eax, 0
	ret
