#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Number to print
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int i, mask = 1;

	mask <<= (sizeof(unsigned long int) * 8 - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (mask & n)
		{
			_putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == sizeof(unsigned long int) * 8 - 1)
				_putchar(0 + '0');
		}

		mask >>= 1;
	}
}
