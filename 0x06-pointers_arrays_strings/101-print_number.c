#include "main.h"

/**
 * print_number - main function
 *
 * Description: 'Print a number using putchar function'
 *
 * @n: Number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
