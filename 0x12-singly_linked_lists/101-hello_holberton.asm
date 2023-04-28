          global    main
          extern    printf
main:
	  mov   edi, hello
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
hello: db `Hello, Holberton\n`,0
