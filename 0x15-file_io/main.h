#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Main Functions */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
