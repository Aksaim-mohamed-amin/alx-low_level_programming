#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: Number to be tested
 *
 * Return: 1 if n is positive, 0 if it is equal to 0,
 *         -1 if negative
 */

int print_sign(int n)
{
	int r;

	if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	return (r);
}
