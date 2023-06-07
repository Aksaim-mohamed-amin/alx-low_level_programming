# 0x08. C - Recursion

This is a directory containing exercises done as part of the ALX SE program to learn about pointers, arrays and strings in C programming language.

## What is Recursion?

Recursion is a programming technique in which a function calls itself. In other words, recursion is a process of solving a problem by dividing it into smaller sub-problems and solving each sub-problem recursively.

## Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
    
-   The standard library is not allowed.

-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `main.h`
    

## Mandatory Tasks

- [x] 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget : 

	Write a function that prints a string, followed by a new line.

	-   Prototype:  `void _puts_recursion(char *s);`

	FYI: The standard library provides a similar function:  `puts`. Run  `man puts`  to learn more.

- [x] 1. Why is it so important to dream? Because, in my dreams we are together: 

	Write a function that prints a string in reverse.

	-   Prototype:  `void _print_rev_recursion(char *s);`

- [x] 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange : 

	Write a function that returns the length of a string.

	-   Prototype:  `int _strlen_recursion(char *s);`

	FYI: The standard library provides a similar function:  `strlen`. Run  `man strlen`  to learn more.

- [x] 3. You mustn't be afraid to dream a little bigger, darling : 

	Write a function that returns the factorial of a given number.

	-   Prototype:  `int factorial(int n);`  
	    
	-   If  `n`  is lower than  `0`, the function should return  `-1`  to indicate an error  
	    
	-   Factorial of  `0`  is  `1`
	
- [x] 4. Once an idea has taken hold of the brain it's almost impossible to eradicate :

	Write a function that returns the value of  `x`  raised to the power of  `y`.

	-   Prototype:  `int _pow_recursion(int x, int y);`  
	    
	-   If  `y`  is lower than  `0`, the function should return  `-1`

	FYI: The standard library provides a different function:  `pow`. Run  `man pow`  to learn more.
	
- [x] 5. Your subconscious is looking for the dreamer : 

	Write a function that returns the natural square root of a number.

	-   Prototype:  `int _sqrt_recursion(int n);`  
	    
	-   If  `n`  does not have a natural square root, the function should return  `-1`

	FYI: The standard library provides a different function:  `sqrt`. Run  `man sqrt`  to learn more.
	
- [x] 6. Inception. Is it possible?

	Write a function that returns  `1`  if the input integer is a  [prime number](https://intranet.alxswe.com/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw "prime number"), otherwise return  `0`.

	-   Prototype:  `int is_prime_number(int n);`

## Optional Tasks

- [x] 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything : 

	Write a function that returns  `1`  if a string is a palindrome and  `0`  if not.

	-   Prototype:  `int is_palindrome(char *s);`  
	    
	-   An empty string is a palindrome

- [x] 8. Inception. Now, before you bother telling me it's impossible...: 
	
	Write a function that compares two strings and returns  `1`  if the strings can be considered identical, otherwise return  `0`.

	-   Prototype:  `int wildcmp(char *s1, char *s2);`
	-   `s2`  can contain the special character  `*`.
	-   The special char  `*`  can replace any string (including an empty string)

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
