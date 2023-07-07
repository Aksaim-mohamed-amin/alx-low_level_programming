#include "main.h"

/**
 * print_binary - Print the binary of a decimal number.
 *
 * @n: Number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, mask = 1;
	int flag = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (mask & n)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag || i == sizeof(unsigned long int) * 8 - 1)
				_putchar('0');
		}

		mask >>= 1;
	}
}
