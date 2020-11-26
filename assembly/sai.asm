section .text
global _start

_start:
; equivale a return 0
mov ebx, 1 ; valor do retorno da exit()
mov rax, 1 ; codigo o syscall exit exit()
int 0x80
