#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard outpu
 *
 * @filename: Pointer to the file name
 * @letters: The number of letters that it should be read and print
 * Return: 0 If the function fails or filename is NULL, else return the number
 *         of character printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || r == -1 || r != w)
	{
		free(buf);
		return (0);
	}

	free(buf);

	close(o);

	return (0);
}
