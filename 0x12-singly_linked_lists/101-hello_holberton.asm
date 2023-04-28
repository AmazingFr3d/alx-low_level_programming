section .data
	message: db "Hello, Hoblberton", 0
	format:  db "%s", 10, 0

section .text
    global main
    extern printf

main:
	; Load the address of the message string into esi
	lea edi, [format]

	; Load the address of the format string into edi
	lea esi, [message]

	; Call printf with the message string as argument
	xor eax, eax
	call printf

	; Exit the program
	xor eax, eax
	ret
