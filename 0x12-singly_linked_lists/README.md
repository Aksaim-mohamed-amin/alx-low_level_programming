
# 0x12. C - Singly Linked Lists


This repository contains solutions to various problems related to singly linked lists in the C programming language. Singly linked lists are a fundamental data structure that consists of nodes connected in a linear manner, where each node contains data and a pointer to the next node in the list.

The goal of this project is to provide a set of exercises and their corresponding solutions to help programmers understand and practice working with singly linked lists. Each exercise focuses on different aspects of linked lists, such as creating, traversing, inserting, deleting, and manipulating nodes.

## Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
-   The standard library is allowed.

-   The prototypes of all the functions and the prototype of the function  `_putchar`  will be included in a header file called  `main.h`

## More Info

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
    

## Mandatory Tasks

- [x] 0. Print list:

	Write a function that prints all the elements of a  `list_t`  list.

	-   Prototype:  `size_t print_list(const list_t *h);`
	-   Return: the number of nodes
	-   Format: see example
	-   If  `str`  is  `NULL`, print  `[0] (nil)`
	-   You are allowed to use  `printf`
	
- [x] 1. List length: 
	
	Write a function that returns the number of elements in a linked  `list_t`  list.

	-   Prototype:  `size_t list_len(const list_t *h);`
		
- [x] 2. Add node: 
	
	Write a function that adds a new node at the beginning of a  `list_t`  list.

	-   Prototype:  `list_t *add_node(list_t **head, const char *str);`
	-   Return: the address of the new element, or  `NULL`  if it failed
	-   `str`  needs to be duplicated
	-   You are allowed to use  `strdup`

- [x] 3. Add node at the end: 

	Write a function that adds a new node at the end of a  `list_t`  list.

	-   Prototype:  `list_t *add_node_end(list_t **head, const char *str);`
	-   Return: the address of the new element, or  `NULL`  if it failed
	-   `str`  needs to be duplicated
	-   You are allowed to use  `strdup`

- [x] 4. Free list: 

	Write a function that frees a  `list_t`  list.

	-   Prototype:  `void free_list(list_t *head);`

- [x] 5. The Hare and the Tortoise: 

	Write a function that prints  `You're beat! and yet, you must allow,\nI bore my house upon my back!\n`  before the  `main`  function is executed.

	-   You are allowed to use the  `printf`  function

- [x] 6. Real programmers can write assembly code in any language: 

	Write a 64-bit program in assembly that prints  `Hello, Holberton`, followed by a new line.

	-   You are only allowed to use the  `printf`  function
	-   You are not allowed to use interrupts
	-   Your program will be compiled using  `nasm`  and  `gcc`:
	

## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.