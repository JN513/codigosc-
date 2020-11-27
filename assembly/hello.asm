section .data

msg: db "Hello Word!!!", 0x0a

section .text
global _start

_start:

mov edx, 24 ; tamanho da string
mov ecx, msg ; *buf
mov ebx, 1 ; fd, nesse caso o 1 e tela e fd  = file description e onde ele vai mostrar
mov rax, 4
int 0x80

; exit(0)
mov ebx, 0
mov rax, 1
int 0x80
