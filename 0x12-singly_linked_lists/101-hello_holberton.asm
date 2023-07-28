section .data
	fmt db "Hello, Holberton", 10, 0
section.text
extern printf

global main

main:
	push rbp
	mov rdi, fmt
	call printf
	pop rbp


	mov rax, 60
	xor rdi, rdi
	syscall
