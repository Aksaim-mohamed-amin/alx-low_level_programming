#include "main.h"

/**
 * print_diagonal - main function
 *
 * Description: 'draw a diagonal line in the terminal using \'
 *
 * @n: number of times the character \
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
