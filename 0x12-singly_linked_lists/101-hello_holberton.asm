global main
main:
    ; Push the format string and the hello message onto the stack
    push format
    push hello

    ; Call printf
    mov rdi, rsp
    xor eax, eax
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    mov eax, 0x60
    xor edi, edi
    syscall
