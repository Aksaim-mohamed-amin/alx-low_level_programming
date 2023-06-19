# 0x0E - Structures, typedef


This repository contains exercises and code examples related to structures in the C programming language.

Structures in C provide a way to group related data items together under a single name. They allow you to define a custom data type that consists of various members with different data types. Structures are commonly used to organize and represent complex data structures, group related variables, and manipulate them as a single entity.

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

- [x] 0. Poppy:

	Define a new type `struct dog` with the following elements:

	-   `name`, type = `char *`
	-   `age`, type = `float`
	-   `owner`, type = `char *`
	
- [x] 1. A dog is the only thing on earth that loves you more than you love yourself : 

	Write a function that initialize a variable of type `struct dog`

	-   Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

- [x] 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad : 

	Write a function that prints a `struct dog`

	-   Prototype: `void print_dog(struct dog *d);`
	-   Format: see example bellow
	-   You are allowed to use the standard library
	-   If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
	-   If `d` is `NULL` print nothing.

- [x] 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read: 

	Define a new type `dog_t` as a new name for the type `struct dog`.

- [x] 4. A door is what a dog is perpetually on the wrong side of:
		
	Write a function that creates a new dog.

	-   Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
	-   You have to store a copy of `name` and `owner`
	-   Return `NULL` if the function fails

- [x] 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg:
		
	Write a function that frees dogs.

	-   Prototype: `void free_dog(dog_t *d);`
		
## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.