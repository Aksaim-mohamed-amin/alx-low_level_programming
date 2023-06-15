# 0x0A - argc, argv

This project introduces the concept of command-line arguments in the C programming language. Command-line arguments are a way of passing information into a program from the command line when it is run.

The main function in C can take two arguments:

		int  main(int argc, char *argv[])		

- `argc` stands for argument count, and is an integer that represents the number of command-line arguments passed to the program.
-  `argv` stands for argument vector, and is a pointer to an array of strings that contain the actual arguments passed to the program.

## Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
    
-   The standard library is allowed.

-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `main.h`
    

## Mandatory Tasks

- [x] 0. It ain't what they call you, it's what you answer to : 

	Write a program that prints its name, followed by a new line.

	-   If you rename the program, it will print the new name, without having to compile it again
	-   You should not remove the path before the name of the program

- [x] 1. Silence is argument carried out by other means : 

	Write a program that prints the number of arguments passed into it.

	-   Your program should print a number, followed by a new line

- [x] 2. The best argument against democracy is a five-minute conversation with the average voter : 

	Write a program that prints all arguments it receives.

	-   All arguments should be printed, including the first one
	-   Only print one argument per line, ending with a new line

- [x] 3. Neither irony nor sarcasm is argument : 

	Write a program that multiplies two numbers.

	-   Your program should print the result of the multiplication, followed by a new line
	-   You can assume that the two numbers and result of the multiplication can be stored in an integer
	-   If the program does not receive two arguments, your program should print  `Error`, followed by a new line, and return  `1`
	
- [x] 4. To infinity and beyond :

	Write a program that adds positive numbers.

	-   Print the result, followed by a new line
	-   If no number is passed to the program, print  `0`, followed by a new line
	-   If one of the number contains symbols that are not digits, print  `Error`, followed by a new line, and return  `1`
	-   You can assume that numbers and the addition of all the numbers can be stored in an  `int`

## Optional Tasks

- [x] 5. Minimal Number of Coins for Change : 

	Write a program that prints the minimum number of coins to make change for an amount of money.

	- Usage:  `./change cents`
	-   where  `cents`  is the amount of cents you need to give back
	-   if the number of arguments passed to your program is not exactly  `1`, print  `Error`, followed by a new line, and return  `1`
	-   you should use  `atoi`  to parse the parameter passed to your program
	-   If the number passed as the argument is negative, print  `0`, followed by a new line
	-   You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
