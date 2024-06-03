section .data
    n db 4           ; Number of rows
    k db 10          ; Initial value
    newline db 10    ; Newline character
    space db ' '     ; Space character

section .text
    global _start

_start:
    mov ecx, n       ; Initialize loop counter to number of rows

outer_loop:
    mov eax, k       ; Load initial value into EAX for the current row
    mov edx, ecx     ; Move loop counter to EDX for inner loop

inner_loop:
    ; Print the value in EAX
    mov ebx, eax     ; Move the value to EBX for printing
    call print_number

    ; Decrement the value in EAX
    dec eax

    ; Check if inner loop counter reached 0
    cmp edx, 1
    je end_of_row

    ; Print space character
    mov eax, 4       ; sys_write
    mov ebx, 1       ; file descriptor 1 (stdout)
    mov ecx, space   ; pointer to space character
    mov edx, 1       ; length of space character
    int 0x80         ; invoke kernel

    ; Decrement inner loop counter and repeat inner loop
    dec edx
    jmp inner_loop

end_of_row:
    ; Print newline character
    mov eax, 4       ; sys_write
    mov ebx, 1       ; file descriptor 1 (stdout)
    mov ecx, newline ; pointer to newline character
    mov edx, 1       ; length of newline character
    int 0x80         ; invoke kernel

    ; Decrement outer loop counter and repeat outer loop
    dec ecx
    cmp ecx, 0
    jne outer_loop

exit:
    ; Exit the program
    mov eax, 1       ; sys_exit
    xor ebx, ebx     ; return 0 status
    int 0x80         ; invoke kernel

print_number:
    ; Convert number in EBX to ASCII and print it
    push eax         ; Preserve EAX
    mov eax, 4       ; sys_write
    mov ecx, ebx     ; Load the number to ECX
    call convert_number_to_string
    mov edx, eax     ; Length of the string
    int 0x80         ; invoke kernel
    pop eax          ; Restore EAX
    ret

convert_number_to_string:
    ; Convert a number in ECX to ASCII string
    ; Assume the number is between 0 and 99

    push ecx         ; Preserve ECX
    push edx         ; Preserve EDX

    mov ebx, 10      ; Divide by 10 to get the tens digit
    div ebx
    add dl, '0'      ; Convert remainder to ASCII
    mov [esp], dl    ; Store tens digit in the buffer

    mov ecx, eax     ; Move quotient (tens digit) to ECX

    mov eax, 4       ; sys_write
    mov ebx, 1       ; file descriptor 1 (stdout)
    mov edx, 1       ; length of tens digit
    int 0x80         ; invoke kernel

    mov eax, 0       ; Clear EAX for further calculations
    mov edx, 0       ; Clear EDX for further calculations

    pop edx          ; Restore EDX
    pop ecx          ; Restore ECX

    ; Convert the units digit to ASCII
    add cl, '0'      ; Convert units digit to ASCII
    mov [esp], cl    ; Store units digit in the buffer

    ret
