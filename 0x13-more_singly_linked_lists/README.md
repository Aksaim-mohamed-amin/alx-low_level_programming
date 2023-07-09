# 0x13. C - More singly linked lists


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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Mandatory Tasks

- [x] 0. Print list:
	Write a function that prints all the elements of a `listint_t` list.

	-   Prototype: `size_t print_listint(const listint_t *h);`
	-   Return: the number of nodes
	-   Format: see example
	-   You are allowed to use `printf`

- [x] 1. List length: 

	Write a function that returns the number of elements in a linked `listint_t` list.

	-   Prototype: `size_t listint_len(const listint_t *h);`
- [x] 2. Add node: 
	
	Write a function that adds a new node at the beginning of a `listint_t` list.

	-   Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
	-   Return: the address of the new element, or `NULL` if it failed
	
- [x] 3. Add node at the end: 

	Write a function that adds a new node at the end of a `listint_t` list.

	-   Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
	-   Return: the address of the new element, or `NULL` if it failed

- [x] 4. Free list: 
	Write a function that frees a `listint_t` list.

	-   Prototype: `void free_listint(listint_t *head);`

- [x] 5. Free: 
	 Write a function that frees a `listint_t` list.

	-   Prototype: `void free_listint2(listint_t **head);`
	-   The function sets the `head` to `NULL`
	
- [x] 6. Pop: 

	Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

	-   Prototype: `int pop_listint(listint_t **head);`
	-   if the linked list is empty return `0`

- [x] 7. Get node at index:
	Write a function that returns the nth node of a `listint_t` linked list.

	-   Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
	-   where `index` is the index of the node, starting at `0`
	-   if the node does not exist, return `NULL`

- [x] 8. Sum list:
	Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

	-   Prototype: `int sum_listint(listint_t *head);`
	-   if the list is empty, return `0`

- [x] 9. Insert:
	Write a function that inserts a new node at a given position.
	-   Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
	-   where `idx` is the index of the list where the new node should be added. Index starts at `0`
	-   Returns: the address of the new node, or `NULL` if it failed
	-   if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

- [x] 10. Delete at index:
	Write a function that deletes the node at index `index` of a `listint_t` linked list.

	-   Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
	-   where `index` is the index of the node that should be deleted. Index starts at `0`
	-   Returns: `1` if it succeeded, `-1` if it failed

## Advanced Tasks

- [x] 11. Reverse list:
	Write a function that reverses a `listint_t` linked list.

	-   Prototype: `listint_t *reverse_listint(listint_t **head);`
	-   Returns: a pointer to the first node of the reversed list
	-   You are not allowed to use more than `1` loop.
	-   You are not allowed to use `malloc`, `free` or arrays
	-   You can only declare a maximum of two variables in your function

- [x] 12. Print (safe version):
	Write a function that prints a `listint_t` linked list.

	-   Prototype: `size_t print_listint_safe(const listint_t *head);`
	-   Returns: the number of nodes in the list
	-   This function can print lists with a loop
	-   You should go through the list only once
	-   If the function fails, exit the program with status `98`
	-   Output format: see example

- [x] 13. Free (safe version):
	Write a function that frees a `listint_t` list.

	-   Prototype: `size_t free_listint_safe(listint_t **h);`
	-   This function can free lists with a loop
	-   You should go though the list only once
	-   Returns: the size of the list that was free’d
	-   The function sets the `head` to `NULL`
	
- [x] 14. Find the loop:
	Write a function that finds the loop in a linked list.

	-   Prototype: `listint_t *find_listint_loop(listint_t *head);`
	-   Returns: The address of the node where the loop starts, or `NULL` if there is no loop
	-   You are not allowed to use `malloc`, `free` or arrays
	-   You can only declare a maximum of two variables in your function


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.