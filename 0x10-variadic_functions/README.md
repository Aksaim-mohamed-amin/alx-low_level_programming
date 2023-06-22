# 0x10 - Variadic functions

This repository contains exercises and code examples related to variadic functions in the C programming language.

A variadic function in C is a function that can accept a variable number of arguments. It provides flexibility by allowing functions to handle a varying number of parameters. Variadic functions are useful when the number or types of arguments are not fixed or known in advance. They utilize the `stdarg.h` header and its macros, such as `va_list`, `va_start`, `va_arg`, and `va_end`, to handle the variable arguments. Variadic functions enable the development of functions with a variable parameter count, making code more adaptable and versatile.

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

- [x] 0. Beauty is variable, ugliness is constant:

	Write a function that returns the sum of all its parameters.
	
	-   Prototype: `int sum_them_all(const unsigned int n, ...);`
	-   If `n == 0`, return `0`
	
- [x] 1. To be is to be the value of a variable: 
	
	Write a function that prints numbers, followed by a new line.

	-   Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
	-   where `separator` is the string to be printed between numbers
	-   and `n` is the number of integers passed to the function
	-   You are allowed to use `printf`
	-   If `separator` is `NULL`, don’t print it
	-   Print a new line at the end of your function
		
- [x] 2. One woman's constant is another woman's variable: 
	
	Write a function that prints strings, followed by a new line.

	-   Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
	-   where `separator` is the string to be printed between the strings
	-   and `n` is the number of strings passed to the function
	-   You are allowed to use `printf`
	-   If separator is NULL, don’t print it
	-   If one of the string is NULL, print `(nil)` instead
	-   Print a new line at the end of your function

- [x] 3. To be is a to be the value of a variable: 

	Write a function that prints anything.

	-   Prototype: `void print_all(const char * const format, ...);`
	-   where `format` is a list of types of arguments passed to the function
	    -   `c`: `char`
	    -   `i`: `integer`
	    -   `f`: `float`
	    -   `s`: `char *` (if the string is NULL, print `(nil)` instead
	    -   any other char should be ignored
	    -   see example
	-   You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
	-   You can use a maximum of
	    -   2 `while` loops
	    -   2 `if`
	-   You can declare a maximum of `9` variables
	-   You are allowed to use `printf`
	-   Print a new line at the end of your function

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.