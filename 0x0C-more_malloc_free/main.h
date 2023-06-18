#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Main Functions */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *mul(char *num1, char *num2);

/* Help Functions */
unsigned int _strlen(char *str);
int is_num(char *str);
int is_zero(char *num);
int str_len(char *str);
void print_exit(char *str, int code);
int _putchar(char c);

#endif /* MAIN_H */
