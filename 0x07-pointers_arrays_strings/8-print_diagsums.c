#include <stdio.h>

/**
 * print_diagsums - main function
 *
 * Description: 'print the sum of two diagonals of a square matrix of intigers'
 *
 * @a: matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				diag2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
