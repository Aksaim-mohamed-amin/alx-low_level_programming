# 0x14. C - Bit manipulation


Bit manipulation is a fundamental concept in computer programming that involves manipulating individual bits within binary data. It allows programmers to perform efficient and precise operations on binary values, such as setting, clearing, toggling, and checking specific bits. Bit manipulation is widely used in areas such as data compression, cryptography, device drivers, and embedded systems programming. By understanding and utilizing bit manipulation techniques, programmers can optimize code, conserve memory, and achieve better performance in their applications.

The goal of this project is to provide a set of exercises and their corresponding solutions to help programmers understand and practice bit manipulation.

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

- [x] 0. 0:
	Write a function that converts a binary number to an `unsigned int`.

	-   Prototype: `unsigned int binary_to_uint(const char *b);`
	-   where `b` is pointing to a string of `0` and `1` chars
	-   Return: the converted number, or 0 if
	    -   there is one or more chars in the string `b` that is not `0` or `1`
	    -   `b` is `NULL`
	  
- [x] 1. 1: 

	Write a function that prints the binary representation of a number.

	-   Prototype: `void print_binary(unsigned long int n);`
	-   Format: see example
	-   You are not allowed to use arrays
	-   You are not allowed to use `malloc`
	-   You are not allowed to use the `%` or `/` operators

- [x] 2. 10: 
	
	Write a function that returns the value of a bit at a given index.

	-   Prototype: `int get_bit(unsigned long int n, unsigned int index);`
	-   where `index` is the index, starting from `0` of the bit you want to get
	-   Returns: the value of the bit at index `index` or `-1` if an error occured
	
- [x] 3. 11: 

	Write a function that sets the value of a bit to `1` at a given index.

	-   Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
	-   where `index` is the index, starting from `0` of the bit you want to set
	-   Returns: `1` if it worked, or `-1` if an error occurred

- [x] 4. 100: 
		Write a function that sets the value of a bit to `0` at a given index.

	-   Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
	-   where `index` is the index, starting from `0` of the bit you want to set
	-   Returns: `1` if it worked, or `-1` if an error occurred

- [x] 5. 101: 
		Write a function that returns the number of bits you would need to flip to get from one number to another.

	-   Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
	-   You are not allowed to use the `%` or `/` operators

## Advanced Tasks

- [x] 6. Endianness:
	Write a function that checks the endianness.

	-   Prototype: `int get_endianness(void);`
	-   Returns: `0` if big endian, `1` if little endian

- [x] 7. Crackme3:
Find the password for [this program](https://github.com/alx-tools/0x13.c "this program").

-   Save the password in the file `101-password`
-   Your file should contain the exact password, no new line, no extra space


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.