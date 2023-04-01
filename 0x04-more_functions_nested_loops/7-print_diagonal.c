#include "main.h"

/**
 * print_diagonal - main function
 *
 * Description: 'draw a diagonal line in the terminal using "\"'
 *
 * @n: number of times the character "\"
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
