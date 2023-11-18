section .text
    extern printf, exit
    global main

main:
    sub rsp, 8            ; Allocate space on the stack for printf arguments
    mov rdi, msg          ; Set the first argument (format string) for printf
    call printf           ; Call the printf function
    add rsp, 8            ; Restore the stack pointer

    mov rdi, 0            ; Set the exit status
    call exit             ; Call the exit system call

section .data
    msg db 'Hello, Holberton', 0xa, 0
