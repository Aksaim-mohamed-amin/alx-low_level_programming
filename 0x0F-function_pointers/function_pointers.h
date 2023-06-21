#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Libraries */
#include <stdio.h>
#include <stddef.h>

/* Main Functions */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/* Help Functions */

#endif /* FUNCTION_POINTERS_H */
