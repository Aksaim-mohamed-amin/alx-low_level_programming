#include "main.h"

/**
 * main - Copies the content of a file to another file.
 *
 * @ac: Arguments count
 * @av: Arguments array
*/
int main(int ac, char **av)
{
	int src, dst, close_s, close_d;
	char *buffer[1024];

	check97(ac, av[0]);

	src = open(av[1], O_RDONLY);
	dst = open(av[2], O_RDWR | O_CREAT, 0664);

	check98(src, av[1]);
	check99(dst, av[2]);

	while (read(src, buffer, 1024) > 0)
	{
		write(dst, buffer, 1024);
	}

	close_s = close(src);
	close_d = close(dst);

	check100(close_s, src);
	check100(close_d, dst);

	return (0);
}

/**
 * check97 - Check if the right number of arguments are passed to the programme
 *
 * @ac: Argument count
 * @name: The name of the programme
*/
void check97(int ac, char *name)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", name);
		exit(97);
	}
}

/**
 * check98 - Check if the file to copy from does exist and it is accessible
 *
 * @src: The value returned from opening src file
 * @name: The name of the src file
*/
void check98(int src, char *name)
{
	if (src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", name);
		exit(98);
	}
}

/**
 * check99 - Check if the there is an error creating the new file
 *
 * @dst: The value returned from opening dst file
 * @name: The name of the dst file
*/
void check99(int src, char *name)
{
	if (src == -1)
	{
		dprintf(2, "Error: Can't write to %s", name);
		exit(99);
	}
}

/**
 * check100 - Check if the there was an error closing a file
 *
 * @close_value: The value returned from closing the file
 * @desciptor: The descriptor of the open file
*/
void check100(int close_value, int descriptor)
{
	if (close_value == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}
