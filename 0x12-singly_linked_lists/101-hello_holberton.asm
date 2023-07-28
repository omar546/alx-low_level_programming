section .data
    hello_string db 'Hello, Holberton', 0   ; Null-terminated string for printf

section .text
    global main

extern printf

main:
    ; Call printf to print the hello_string
    mov rdi, hello_string    ; Load the address of the string into rdi
    call printf             ; Call the printf function

    ; Exit the program
    mov rax, 60             ; Syscall number for exit (60 in 64-bit)
    xor rdi, rdi            ; Exit status 0
    syscall                 ; Invoke the syscall to exit the program

