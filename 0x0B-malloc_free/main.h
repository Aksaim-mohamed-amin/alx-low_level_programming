#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdio.h>

/* Main Functions */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

/* Help Functions */
int _strlen(char *str);
int count_words(char *str);
void free_arr(char **arr, int len);

#endif /* MAIN_H */
