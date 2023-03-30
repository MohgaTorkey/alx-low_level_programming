 global main
        extern  printf
main:
         mov edi, format
         xor eax, eax
         call printf
         mov eax, 0
         ret
format: ad `Hello, Holberton\n`, 0
