#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'Print the sign of a number'
 *
 * @n: number to be tested
 *
 * Return: 1 if n is positive, 0 if it is equal to 0,
 * -1 if negative'
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
