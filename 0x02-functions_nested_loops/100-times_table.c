#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *@n: the n numbre
 * Return: none
 */
void print_times_table(int n)
{
	int x, y, i;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				i = x * y;
				if (x != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if ((x != 0) && (i < 10))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + i);
				}
				else if ((i >= 10) && (i < 100))
				{
					_putchar(' ');
					_putchar('0' + (i / 10));
					_putchar('0' + (i % 10));
				}
				else if (i >= 100)
				{
					_putchar('0' + (i / 100));
					_putchar('0' + ((i / 10) % 10));
					_putchar('0' + (i % 10));
				}
				else
					_putchar('0' + (i % 10));
			}
		_putchar('\n');
		}
	}
}
