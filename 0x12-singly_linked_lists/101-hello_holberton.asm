section .data
    hello_string db 'Hello, Holberton', 10   ; Null-terminated string for printing with new line (10)

section .text
    global _start

_start:
    ; Write the hello_string to stdout (file descriptor 1)
    mov rax, 1              ; Syscall number for sys_write (1 in 64-bit)
    mov rdi, 1              ; File descriptor for stdout (1)
    mov rsi, hello_string   ; Address of the string to print
    mov rdx, 16             ; Length of the string (including null terminator and new line)
    syscall                 ; Invoke the syscall to write the string to stdout

    ; Exit the program
    mov rax, 60             ; Syscall number for sys_exit (60 in 64-bit)
    xor rdi, rdi            ; Exit status 0
    syscall                 ; Invoke the syscall to exit the program
