section .data
    format db "Hello, Holberton", 0   ; Format string for printf

section .text
    global main                      ; Entry point for the program

extern printf                        ; Declare the external printf function

main:
    push ebp                         ; Set up stack frame
    mov ebp, esp

    push format                      ; Push the format string onto the stack
    call printf                      ; Call the printf function
    add esp, 4                        ; Clean up the stack after the function call

    mov esp, ebp                     ; Restore the stack pointer
    pop ebp                          ; Restore the base pointer

    xor eax, eax                     ; Return 0
    ret
