#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/* Macros */
#define BUFFSIZE 1024

/* Main Functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Help Functions */
int _strlen(char *str);
void print_exit(int code, const char *msg, const char *file);

#endif /* MAIN_H */
