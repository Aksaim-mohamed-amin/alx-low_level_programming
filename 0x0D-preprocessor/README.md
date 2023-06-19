# 0x0D - Preprocessor


This repository focuses on the C preprocessor, a powerful tool that runs before compilation to perform tasks such as macro expansion, file inclusion, and conditional compilation. The preprocessor helps with code reusability, modularity, and platform-specific code

## Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
-   The standard library is allowed.

-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `main.h`
    

## Mandatory Tasks

- [x] 0. Object-like Macro:

	Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

- [x] 1. Pi : 

	Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

- [x] 2. File name : 

	Write a program that prints the name of the file it was compiled from, followed by a new line.

	-   You are allowed to use the standard library

- [x] 3. Function-like macro : 

	Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

- [x] 4. SUM:
		
	Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.