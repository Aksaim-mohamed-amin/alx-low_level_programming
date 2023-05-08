#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard outpu
 *
 * @filename: File name
 * @letters: The number of letters that it should be read and print
 * Return: The actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	int c;
	size_t i;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	for (i = 0; i < letters && (c = getc(f)) != EOF; i++)
	{
		_putchar(c);
	}

	fclose(f);
	return (i);
}
