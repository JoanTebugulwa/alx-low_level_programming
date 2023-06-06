section .data
    hello db "Hello, Holberton", 0
    nl db 10, 0

section .text
    global main
    extern printf

main:
    push rbp            ; Save the base pointer
    mov rbp, rsp        ; Set up the new stack frame

    mov rdi, hello      ; Set the first argument (format string) to the address of hello
    xor eax, eax        ; Clear rax (return value) before calling printf
    call printf         ; Call printf to print hello

    mov rdi, nl         ; Set the first argument (format string) to the address of nl
    xor eax, eax        ; Clear rax (return value) before calling printf
    call printf         ; Call printf to print a new line

    mov rsp, rbp        ; Restore the stack pointer
    pop rbp             ; Restore the base pointer

    xor eax, eax        ; Set the return value to 0
    ret                 ; Return from main
