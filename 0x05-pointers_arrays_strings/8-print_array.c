#include <stdio.h>

/**
 * print_array - main function
 *
 * Description: 'Print the n elements of an array'
 *
 * @a: The array
 * @n: The number of elements you want to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
