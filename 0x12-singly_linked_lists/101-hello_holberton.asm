global main
main:
    ; Push the format string and the hello message onto the stack
    push format
    push hello

    ; Call printf
    mov rdi, rsp
    xor eax, eax
    call printf
	mov eax,0
	ret
	format: db 'Hello, Holberton\n',0
