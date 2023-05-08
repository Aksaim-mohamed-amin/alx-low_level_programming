#ifndef MAIN_H
#define MAIN_h

/* Libraries */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/* Main Functions */
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Help Functions */
int _putchar (char c);

#endif /*  MAIN_H */
