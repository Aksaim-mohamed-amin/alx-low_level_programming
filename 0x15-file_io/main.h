#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Macros */
#define BUFFER_SIZE 1024

/* Main Functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Help Functions */
int str_len(char *str);
void error_exit(int code, const char *msg, const char *file, int src, int dst);

#endif /* MAIN_H */
