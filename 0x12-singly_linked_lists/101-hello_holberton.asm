section .data
    mesg: db "Hello, Holberton", 0
    fmt: db "%s", 10, 0

section .text
    global main
    extern printf

main:
    ; Call printf to print the message
    mov edi, fmt
    mov esi, msg
    mov eax, 0
    call printf


    ; Return 0 to indicate success
    mov eax, 0
    ret
