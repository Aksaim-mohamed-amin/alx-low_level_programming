#include "main.h"

/**
 * times_table - Print the 9 times table starting with 0'
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + k);
			}
			else if (k >= 10)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
