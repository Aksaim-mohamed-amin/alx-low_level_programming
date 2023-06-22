#include "main.h"

/**
 * print_buffer - Print a buffer.
 *
 * @b: Pointer to buffer to print.
 * @size: Number of bytes to read.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j += 2)
		{
			if (i + j + 1 < size)
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
			else if (i + j < size)
				printf("%02x   ", b[i + j]);
			else
				printf("     ");
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] > 31 && b[i + j] < 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
