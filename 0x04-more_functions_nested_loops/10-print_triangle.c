#include "main.h"

/**
 * print_triangle - Print triangle of the character # using _putchar
 *
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');

				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
