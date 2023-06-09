#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>

/* Macros */
#define BUFFER_SIZE 1024

/* Main Functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Help Functions */
int str_len(char *str);
void print_error_exit(int code, const char *msg, const char *file);

#endif /* MAIN_H */
