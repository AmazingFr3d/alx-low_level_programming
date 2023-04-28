section .data
    message: db "Hello, Holberton", 0
    format: db "%s", 10, 0

section .text
    global main
    extern printf

main:
    ; Call printf to print the message
    push message
    push format
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Return 0 to indicate success
    mov eax, 0
    ret
