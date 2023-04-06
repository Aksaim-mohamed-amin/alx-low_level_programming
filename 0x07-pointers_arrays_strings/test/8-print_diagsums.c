#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square.
 *
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0, j = 1, sum1 = 0, sum2 = 0; i < size; i++, j++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (j * size - 1 - i));
	}
	printf("%i, %i\n", sum1, sum2);
}
