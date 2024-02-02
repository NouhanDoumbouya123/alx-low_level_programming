section .data
    hello db 'Hello, Holberton', 0
    newline db 10  ; ASCII code for newline character

section .text
    global main

extern printf
extern exit

main:
    ; write "Hello, Holberton" to stdout
    mov rdi, 1
    mov rsi, hello
    mov rdx, 17  ; Length of the string
    call printf

    ; write newline character to stdout
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    call printf

    ; exit program
    mov rdi, 0
    call exit
