section .data
    	hello db "Hello, Holberton", 0x0A, 0

section .text
	extern printf
    	global main
main:
	mov edi, hello
	mov eax, 0
	call printf
