extern printf
section .data
msg: db "hello, holberton",0
fmat: db "%s", 10, 0

section .text
global main
extern printf
main:
push rbp
mov rdi,fmt
mov rsi, msg
mov rax,0
call printf

pop rbp
mov rax,0
ret
