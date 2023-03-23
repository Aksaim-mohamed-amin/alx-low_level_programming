#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: none
 */
void times_table(void)
{
	int x, y, n;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			n = x * y;
			if (n >= 10)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
				_putchar('0' + n);
			if (!(x == 9))
			{
				_putchar(',');
				_putchar(' ');
				if (((x + 1) * y) <= 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
