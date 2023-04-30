
# 0x12. C - Singly linked lists

In this project, we will be exploring the concept of singly linked lists in C programming language. Singly linked lists are a type of data structure where each element in the list contains a pointer to the next element in the list. This allows for efficient traversal of the list, but makes random access to elements more difficult.

## Getting Started

Before starting this module, it is recommended that you have a basic understanding of computer programming concepts, including basic syntax, data types, and control flow statements. Additionally, you should have some familiarity with C programming concepts, including variable types, functions, and the use of the gcc compiler.

## Project Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
    
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc… is forbidden
    

## Mandatory Tasks

- [x] 0. Print list :
    
	Write a function that prints all the elements of a  `list_t`  list.

	-   Prototype:  `size_t print_list(const list_t *h);`
	-   Return: the number of nodes
	-   Format: see example
	-   If  `str`  is  `NULL`, print  `[0] (nil)`
	-   You are allowed to use  `printf`

    
-  [x] 1. List length:
    
	  Write a function that returns the number of elements in a linked  `list_t`  list.

	-   Prototype:  `size_t list_len(const list_t *h);`
    
- [x]  2. Add node :
    
	 Write a function that adds a new node at the beginning of a  `list_t`  list.

	-   Prototype:  `list_t *add_node(list_t **head, const char *str);`
	-   Return: the address of the new element, or  `NULL`  if it failed
	-   `str`  needs to be duplicated
	-   You are allowed to use  `strdup`
	
    
- [x]  3. Add node at the end :
    
	 Write a function that adds a new node at the end of a  `list_t`  list.

	-   Prototype:  `list_t *add_node_end(list_t **head, const char *str);`
	-   Return: the address of the new element, or  `NULL`  if it failed
	-   `str`  needs to be duplicated
	-   You are allowed to use  `strdup`
    
- [x]  4. Free list :
    
	 Write a function that frees a  `list_t`  list.

	-   Prototype:  `void free_list(list_t *head);`
    

## Optional Tasks

- [x] 5. The Hare and the Tortoise:
    
	Write a function that prints  `You're beat! and yet, you must allow,\nI bore my house upon my back!\n`  before the  `main`  function is executed.

	-   You are allowed to use the  `printf`  function
        
- [x] 6. Real programmers can write assembly code in any language :
   
	Write a 64-bit program in assembly that prints  `Hello, Holberton`, followed by a new line.

	-   You are only allowed to use the  `printf`  function
	-   You are not allowed to use interrupts
	-   Your program will be compiled using  `nasm`  and  `gcc`:  
	- nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello (will be used to compail the programe).

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
