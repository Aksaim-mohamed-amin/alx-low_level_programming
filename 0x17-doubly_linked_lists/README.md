
# 0x15. C - File I/O


A doubly linked list is a data structure comprising nodes, each containing data and two pointers: one pointing to the previous node and the other to the next node. This dual-directional linkage allows traversal in both forward and backward directions, enhancing versatility. Unlike singly linked lists, doubly linked lists enable more flexible insertions and deletions, even at arbitrary positions. However, this flexibility comes with increased memory usage due to the extra pointer in each node.

In this project, we will delve into the concept of doubly linked lists in the C programming language. Doubly linked lists are a fundamental data structure that allows efficient insertion, deletion, and traversal of elements in both forward and backward directions.

## Requirements

-   Editors: vi, vim, emacs
    
-   All the files will be compiled on Ubuntu 20.04 LTS using gcc, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
    
-   All codes are using the Betty style.
    
-   Global variables are not allowed.
    
-   No more than 5 functions per file.

-  The only C standard library functions allowed are  `malloc`,  `free`,  `printf`  and  `exit`

- The prototypes of all your functions should be included in your header file called  `lists.h`

## More Info

Please use this data structure for this project:

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Mandatory Tasks

- [x] 0. Print list :
	Write a function that prints all the elements of a  `dlistint_t`  list.

	-   Prototype:  `size_t print_dlistint(const dlistint_t *h);`
	-   Return: the number of nodes
	-   Format: see example
	  
- [x] 1. List length : 

	Write a function that returns the number of elements in a linked  `dlistint_t`  list.

	-   Prototype:  `size_t dlistint_len(const dlistint_t *h);`

- [x] 2. Add node : 
	
	Write a function that adds a new node at the beginning of a  `dlistint_t`  list.

	-   Prototype:  `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
	-   Return: the address of the new element, or  `NULL`  if it failed
	
- [x] 3. Add node at the end : 

	Write a function that adds a new node at the end of a  `dlistint_t`  list.

	-   Prototype:  `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
	-   Return: the address of the new element, or  `NULL`  if it failed

- [x] 4. Free list :

	Write a function that frees a  `dlistint_t`  list.

	-   Prototype:  `void free_dlistint(dlistint_t *head);`

- [x] 5. Get node at index :

	Write a function that returns the nth node of a  `dlistint_t`  linked list.

	-   Prototype:  `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
	-   where  `index`  is the index of the node, starting from  `0`
	-   if the node does not exist, return  `NULL`

- [x] 6. Sum list :

	Write a function that returns the sum of all the data (n) of a  `dlistint_t`  linked list.

	-   Prototype:  `int sum_dlistint(dlistint_t *head);`
	-   if the list is empty, return  `0`

- [x] 7. Insert at index :

	Write a function that inserts a new node at a given position.

	-   Prototype:  `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
	-   where  `idx`  is the index of the list where the new node should be added. Index starts at  `0`
	-   Returns: the address of the new node, or  `NULL`  if it failed
	-   if it is not possible to add the new node at index  `idx`, do not add the new node and return  `NULL`

	Your files  `2-add_dnodeint.c`  and  `3-add_dnodeint_end.c`  will be compiled during the correction

- [x] 8. Delete at index :

	Write a function that deletes the node at index  `index`  of a  `dlistint_t`  linked list.

	-   Prototype:  `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
	-   where  `index`  is the index of the node that should be deleted. Index starts at  `0`
	-   Returns:  `1`  if it succeeded,  `-1`  if it failed

## Advanced Tasks

- [x] 9. Crackme4 :
	Find the password for  [crackme4](https://github.com/alx-tools/0x17.c "crackme4").

	-   Save the password in the file  `100-password`
	-   Your file should contain the exact password, no new line, no extra space
	-   Hint: The program prints “OK” when the password is correct

- [x] 10. Palindromes :

	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is  `9009`  =  `91`  ×  `99`.

	Find the largest palindrome made from the product of two 3-digit numbers.

	-   Save the result in the file  `102-result`
	-   Your file should contain the exact result, no new line, no extra space

- [x] 11. crackme5 :

	Write a keygen for  [crackme5](https://github.com/alx-tools/0x17.c "crackme5").

	-   Usage of the crackme:  `./crackme5 username key`
	-   The crackme will segfault if you do not enter the correct key for the user
	-   Usage for your keygen:  `./keygen5 username`
	-   Your keygen should print a valid key for the  `username`


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.