# 0x06. C - More pointers, arrays and strings

This is a directory containing exercises done as part of the ALX SE program to learn about pointers, arrays and strings in C programming language.

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
    
-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `holberton.h`
    

## Mandatory Tasks

- [x] 0. strcat : 

	Write a function that concatenates two strings.

	-   Prototype:  `char *_strcat(char *dest, char *src);`
	-   This function appends the  `src`  string to the  `dest`  string, overwriting the terminating null byte (`\0`) at the end of  `dest`, and then adds a terminating null byte
	-   Returns a pointer to the resulting string  `dest`

	FYI: The standard library provides a similar function:  `strcat`. Run  `man strcat`  to learn more.

- [x] 1. strncat : 

	Write a function that concatenates two strings.

	-   Prototype:  `char *_strncat(char *dest, char *src, int n);`
	-   The  `_strncat`  function is similar to the  `_strcat`  function, except that
	    -   it will use at most  `n`  bytes from  `src`; and
	    -   `src`  does not need to be null-terminated if it contains  `n`  or more bytes
	-   Return a pointer to the resulting string  `dest`

	FYI: The standard library provides a similar function:  `strncat`. Run  `man strncat`  to learn more.

- [x] 2.  strncpy : 

	Write a function that copies a string.

	-   Prototype:  `char *_strncpy(char *dest, char *src, int n);`  
	    
	-   Your function should work exactly like  `strncpy`

	FYI: The standard library provides a similar function:  `strncpy`. Run  `man strncpy`  to learn more.

- [x] 3. strcmp : 

	Write a function that compares two strings.

	-   Prototype:  `int _strcmp(char *s1, char *s2);`
	-   Your function should work exactly like  `strcmp`

	FYI: The standard library provides a similar function:  `strcmp`. Run  `man strcmp`  to learn more.
	
- [x] 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy :

	Write a function that reverses the content of an array of integers.

	-   Prototype:  `void reverse_array(int *a, int n);`
	-   Where  `n`  is the number of elements of the array

- [x] 5. Always look up : 

	Write a function that changes all lowercase letters of a string to uppercase.

	-   Prototype:  `char *string_toupper(char *);`
	
- [x] 6. Expect the best. Prepare for the worst. Capitalize on what comes : 

	Write a function that capitalizes all words of a string.

	-   Prototype:  `char *cap_string(char *);`
	-   Separators of words: space, tabulation, new line,  `,`,  `;`,  `.`,  `!`,  `?`,  `"`,  `(`,  `)`,  `{`, and  `}`

- [x] 7. Mozart composed his music not for the elite, but for everybody : 

	Write a function that encodes a string into  [1337](https://intranet.alxswe.com/rltoken/9v9KfpvWnL0GoMu5mozbug "1337").

	-   Letters  `a`  and  `A`  should be replaced by  `4`  
	    
	-   Letters  `e`  and  `E`  should be replaced by  `3`  
	    
	-   Letters  `o`  and  `O`  should be replaced by  `0`  
	    
	-   Letters  `t`  and  `T`  should be replaced by  `7`  
	    
	-   Letters  `l`  and  `L`  should be replaced by  `1`  
	    
	-   Prototype:  `char *leet(char *);`
	-   You can only use one  `if`  in your code
	-   You can only use two loops in your code
	-   You are not allowed to use  `switch`
	-   You are not allowed to use any ternary operation



## Optional Tasks

- [x] 8. rot13 : 
	
	Write a function that encodes a string using  [rot13](https://intranet.alxswe.com/rltoken/YRxmNA7BnP6yZhl09TKX3A "rot13").

	-   Prototype:  `char *rot13(char *);`  
	    
	-   You can only use  `if`  statement once in your code
	-   You can only use two loops in your code
	-   You are not allowed to use  `switch`
	-   You are not allowed to use any ternary operation

- [x] 9. Numbers have life; they're not just symbols on paper :

	Write a function that prints an integer.
	-   Prototype:  `void print_number(int n);`
	-   You can only use  `_putchar`  function to print
	-   You are not allowed to use  `long`
	-   You are not allowed to use arrays or pointers
	-   You are not allowed to hard-code special values

- [x] 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work :
	
	Add one line to  [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c "this code"), so that the program prints  `a[2] = 98`, followed by a new line.

	-   You are not allowed to use the variable  `a`  in your new line of code
	-   You are not allowed to modify the variable  `p`
	-   You can only write one statement
	-   You are not allowed to use  `,`
	-   You are not allowed to code anything else than the line of expected line of code at the expected line
	-   Your code should be written at line 19, before the  `;`
	-   Do not remove anything from the initial code (not even the comments)
	-   and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	-   You are allowed to use the standard library


- [x] 11. It is the addition of strangeness to beauty that constitutes the romantic character in art :

	Write a function that adds two numbers.

	-   Prototype:  `char *infinite_add(char *n1, char *n2, char *r, int size_r);`  
	    
	-   Where  `n1`  and  `n2`  are the two numbers
	-   `r`  is the buffer that the function will use to store the result
	-   `size_r`  is the buffer size
	-   The function returns a pointer to the result
	-   You can assume that you will always get positive numbers, or  `0`
	-   You can assume that there will be only digits in the strings  `n1`  and  `n2`
	-   `n1`  and  `n2`  will never be empty
	-   If the result can not be stored in  `r`  the function must return  `0`


- [x] 12. Noise is a buffer, more effective than cubicles or booth walls :

	Write a function that prints a buffer.

	-   Prototype:  `void print_buffer(char *b, int size);`  
	    
	-   The function must print the content of  `size`  bytes of the buffer pointed by  `b`  
	    
	-   The output should print 10 bytes per line
	-   Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with  `0`
	-   Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	-   Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print  `.`
	-   Each line ends with a new line  `\n`
	-   If  `size`  is 0 or less, the output should be a new line only  `\n`
	-   You are allowed to use the standard library
	-   The output should look like the following example, and formatted exactly the same way:

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
