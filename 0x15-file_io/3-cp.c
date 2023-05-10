#include "main.h"

/**
 * main - Copies the content of a file to another file.
 *
 * @ac: Arguments count
 * @av: Arguments array
 *
 * Return: Always 0 (Success)
*/
int main(int ac, char **av)
{
	int src, dst, bytes_rd, bytes_wr;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error_exit(97, "Usage: cp file_from %s\n", av[0]);

	src = open(av[1], O_RDONLY);
	if (src == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", av[1]);

	dst = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dst == -1)
		print_error_exit(99, "Error: Can't write to %s\n", av[2]);

	while ((bytes_rd = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_wr = write(dst, buffer, bytes_rd);
		if (bytes_wr == -1)
			print_error_exit(99, "Error: Can't write to %s\n", av[2]);
	}

	if (bytes_rd == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", av[1]);

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close(dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst);
		exit(100);
	}
	return (0);
}

/**
 * print_error_exit - Print an error and exit with a code
 *
 * @code: Code to exit the program with it
 * @message: Error message to print
 * @file: File name
 */
void print_error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}
