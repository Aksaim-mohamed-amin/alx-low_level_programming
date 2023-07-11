#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 *
 * @filename: Name of the file to read from.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         and 0 if the file can not be opened or read, or if filename
 *         is NULL or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytesRead, bytesWrite;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytesRead = read(fd, buff, letters);
	bytesWrite = write(STDOUT_FILENO, buff, bytesRead);

	free(buff);

	if (fd == -1 || bytesRead == -1 || bytesWrite == -1)
		return (0);

	close(fd);
	return (bytesWrite);
}
