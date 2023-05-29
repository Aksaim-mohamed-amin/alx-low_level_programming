#include "main.h"

/**
 * print_times_table - Print the 9 times table starting with 0
 *
 * @n: Number of tables
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				k = i * j;

				if (k < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + k);
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else if (k >= 100)
				{
					_putchar('0' + k / 100);
					_putchar('0' + (k / 10) % 10);
					_putchar('0' + k % 10);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
