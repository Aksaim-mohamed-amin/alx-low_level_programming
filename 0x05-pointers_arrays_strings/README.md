# 0x05 - C Pointers, Arrays and Strings

This repository contains tasks for learning how to work with pointers, arrays, and strings in C programming. The tasks cover topics such as pointer declaration, pointer arithmetic, array initialization, string manipulation, and memory allocation.

## Getting Started

Before starting this module, it is recommended that you have a basic understanding of computer programming concepts, including basic syntax, data types, and control flow statements. Additionally, you should have some familiarity with C programming concepts, including variable types, functions, and the use of the gcc compiler.

## Project Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
    
-   The standard library is not allowed, except for the following functions:
    
-   `malloc`
    
-   `free`
    
-   `exit`
    
-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `main.h`
    

## Mandatory Tasks

- [x] 0. 98 Battery st. : 

	Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
	Prototype: void reset_to_98(int *n);

- [x] 1.  Don't swap horses in crossing a stream : 

	Write a function that swaps the values of two integers.
	Prototype: void swap_int(int *a, int *b);

- [x] 2.  This report, by its very length, defends itself against the risk of being read : 

	Write a function that returns the length of a string.
		Prototype: int _strlen(char *s);

- [x] 3.  I do not fear computers. I fear the lack of them : 

	Write a function that prints a string, followed by a new line, to stdout.

	Prototype: void _puts(char *str);

- [x] 4.  I can only go one way. I've not got a reverse gear :

	Write a function that prints a string, in reverse, followed by a new line.

	Prototype: void print_rev(char *s);

- [x] 5.  A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes : 

	Write a function that reverses a string.

	Prototype: void rev_string(char *s);

- [x] 6.  Half the lies they tell about me aren't true : 

	Write a function that prints every other character of a string, starting with the first character, followed by a new line.

	Prototype: void puts2(char *str);

- [x] 7.  Winning is only half of it. Having fun is the other half : 

	Write a function that prints the second half of the string, followed by a new line.

	Prototype: void puts_half(char *str);
	
	The function should print the second half of the string str

	If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

- [x] 8.  Arrays are not pointers : 

	Write a function that prints every element of an array of integers, followed by a new line.

	Prototype: void print_array(int *a, int n);

	where n is the number of elements of the array

	Numbers must be separated by comma, followed by a space ,

	The output should end with a new line

- [x] 9.  strcpy : 

	 Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

	Prototype: char *_strcpy(char *dest, char *src);

	Return value: the pointer to dest

	FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

## Optional Tasks

- [x] 10.  Great leaders are willing to sacrifice their own personal interests for the good of the team : 
	
	Write a function that convert a string to an integer.	
-   Prototype:  `int _atoi(char *s);`
-   The number in the string can be preceded by an infinite number of characters
-   You need to take into account all the  `-`  and  `+`  signs before the number
-   If there are no numbers in the string, the function must return  `0`
-   You are not allowed to use  `long`
-   You are not allowed to declare new variables of “type” array
-   You are not allowed to hard-code special values
-   We will use the  `-fsanitize=signed-integer-overflow`  gcc flag to compile your code.

	FYI: The standard library provides a similar function:  `atoi`. Run  `man atoi`  to learn more.


- [x] 11. Don't hate the hacker, hate the code :

	Create a program that generates random valid passwords for the program  [101-crackme](https://github.com/holbertonschool/0x04.c "101-crackme").

	-   You are allowed to use the standard library
	-   You don’t have to pass the  `betty-style`  tests (you still need to pass the  `betty-doc`  tests)
	-   man  `srand`,  `rand`,  `time`
	-   `gdb`  and  `objdump`  can help


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.