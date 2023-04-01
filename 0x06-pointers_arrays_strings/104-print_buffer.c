#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 *
 *@b: the buffer
 *@size: size of the buffer
 *
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size && i + j + 1 < size)
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
			else if (i + j < size)
				printf("%02x   ", b[i + j]);
			else
				printf("     ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;
			if (b[i + j] > 31 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				 printf(".");
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
