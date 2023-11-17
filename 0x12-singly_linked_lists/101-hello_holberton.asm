SECTION .data
nasm: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

SECTION .text
exturn printf
globle main

main:
mov esi, msg
mov edi, fmt
mov eax, 0
call printf

mov eax, 0
ret
