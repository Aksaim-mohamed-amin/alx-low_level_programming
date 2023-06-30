section .data
	hello db 'Hello, Holberton',0
	fmt db '%s', 10, 0

extern printf

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	; Print the string
	mov rdi, fmt
	mov rsi, hello
	xor rax, rax
	call printf

	; Exit the program
	xor eax, eax
	mov rsp, rbp
	pop rbp
	ret
