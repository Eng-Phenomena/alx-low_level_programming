	global main

extern printf

main:
    sub rsp, 8

    mov edi, message 
    xor eax, eax 
    call printf

    add rsp, 8
    mov eax, 0 
    ret
format: db 'Hello, Holberton\n', 0
