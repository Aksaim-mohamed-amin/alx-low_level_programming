#  0x04 - C More functions, more nested loops

This folder contains tasks for learning how to create functions and work with nested loops in C programming. The tasks cover topics such as function declaration, function prototypes, function return types, nested loop structures, and recursion.

##  Getting Started

Before starting this module, it is recommended that you have a basic understanding of computer programming concepts, including basic syntax, data types, and control flow statements. Additionally, you should have some familiarity with C programming concepts, including variable types, arrays, and the use of the gcc compiler.

##  Project Requirements

- Editors: vi, vim, emacs

- All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

- All codes are using the Betty style.

- Global variables are not allowed.

- No more than 5 functions per file.

- The standard library is not allowed, except for the following functions:

- `malloc`

- `free`

- `exit`

- The prototypes of all the functions and the prototype of the function `_putchar` will be included in a header file called `main.h`

##  Mandatory Tasks

- [x] 0. isupper :

Write a function that checks for uppercase character.

- Prototype: `int _isupper(int c);`

- Returns `1` if `c` is uppercase

- Returns `0` otherwise

- [x] 1. isdigit :

Write a function that checks for a digit (`0` through `9`).

- Prototype: `int _isdigit(int c);`

- Returns `1` if `c` is a digit

- Returns `0` otherwise

- [x] 2. Collaboration is multiplication :

Write a function that multiplies two integers.

- Prototype: `int mul(int a, int b);`

- [x] 3. The numbers speak for themselves :

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- Prototype: `void print_numbers(void);`

- You can only use `_putchar` three times in your code

- [x] 4. I believe in numbers and signs :

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- Prototype: `void print_most_numbers(void);`

- Do not print `2` and `4`

- You can only use `_putchar` twice in your code

- [x] 5. Numbers constitute the only universal language :

Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

- Prototype: `void more_numbers(void);`

- You can only use `_putchar` three times in your code

- [x] 6. The shortest distance between two points is a straight line :

Write a function that draws a straight line in the terminal.

- Prototype: `void print_line(int n);`

- You can only use `_putchar` function to print

- Where `n` is the number of times the character `_` should be printed

- [x] 7. I feel like I am diagonally parked in a parallel universe :

Write a function that draws a diagonal line in the terminal.

- Prototype: `void print_diagonal(int n);`

- You can only use `_putchar` function to print

- Where `n` is the number of times the character `\` should be printed

- If `n` is `0` or less, the function should only print a new line (`\n`)

- [x] 8. You are so much sunshine in every square inch :

Write a function that prints a square, followed by a new line.

- Prototype: `void print_square(int size);`

- You can only use `_putchar` function to print

- Where `size` is the size of the square

- If `size` is `0` or less, the function should print only a new line

- Use the character `#` to print the square

- [x] 9. Fizz-Buzz :

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

- Each number or word should be separated by a space

- You are allowed to use the standard library

- [x] 10. Triangles :

Write a function that prints a triangle, followed by a new line.

- Prototype: `void print_triangle(int size);`

- You can only use `_putchar` function to print

- Where `size` is the size of the triangle

- If `size` is `0` or less, the function should print only a new line

- Use the character `#` to print the triangle

## Optional Tasks

- [x] 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic :

The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.

- You are allowed to use the standard library

- Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

- [x] 12. Numbers have life; they're not just symbols on paper

Write a function that prints an integer.

- Prototype: `void print_number(int n);`

- You can only use `_putchar` function to print

- You are not allowed to use `long`

- You are not allowed to use arrays or pointers

- You are not allowed to hard-code special values

##  Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
