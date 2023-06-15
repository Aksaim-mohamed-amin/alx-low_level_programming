# 0x0B - malloc, free


This project introduces the concepts of dynamic memory allocation and deallocation in the C programming language using the `malloc` and `free` functions. Dynamic memory allocation allows programs to request memory dynamically at runtime, enabling flexible memory management.

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

- [x] 0. Float like a butterfly, sting like a bee : 

	Write a function that creates an array of chars, and initializes it with a specific char.

	-   Prototype: `char *create_array(unsigned int size, char c);`
	-   Returns `NULL` if size = `0`
	-   Returns a pointer to the array, or `NULL` if it fails

- [x] 1. The woman who has no imagination has no wings : 

	Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

	-   Prototype: `char *_strdup(char *str);`
	-   The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
	-   Returns `NULL` if str = NULL
	-   On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

	FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

- [x] 2. He who is not courageous enough to take risks will accomplish nothing in life : 

   Write a function that concatenates two strings.

	-   Prototype: `char *str_concat(char *s1, char *s2);`
	-   The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
	-   if `NULL` is passed, treat it as an empty string
	-   The function should return `NULL` on failure

- [x] 3. If you even dream of beating me you'd better wake up and apologize : 

	Write a function that returns a pointer to a 2 dimensional array of integers.

	-   Prototype: `int **alloc_grid(int width, int height);`
	-   Each element of the grid should be initialized to `0`
	-   The function should return `NULL` on failure
	-   If `width` or `height` is `0` or negative, return `NULL`

- [x] 4. It's not bragging if you can back it up :
	
	Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

	-   Prototype: `void free_grid(int **grid, int height);`
	-   Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

## Optional Tasks

- [x] 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe : 

	Write a function that concatenates all the arguments of your program.

	-   Prototype: `char *argstostr(int ac, char **av);`
	-   Returns `NULL` if `ac == 0` or `av == NULL`
	-   Returns a pointer to a new string, or `NULL` if it fails
	-   Each argument should be followed by a `\n` in the new string

- [x] 6. I will show you how great I am : 

	Write a function that splits a string into words.

	-   Prototype: `char **strtow(char *str);`
	-   The function returns a pointer to an array of strings (words)
	-   Each element of this array should contain a single word, null-terminated
	-   The last element of the returned array should be `NULL`
	-   Words are separated by spaces
	-   Returns `NULL` if `str == NULL` or `str == ""`
	-   If your function fails, it should return `NULL`


## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.