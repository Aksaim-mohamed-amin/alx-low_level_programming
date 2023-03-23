#include <ctype.h>
#include "main.h"
/**
 * print_sign - main function
 *
 * Description: 'Print the sign of a number'
 *
 * @n : number to be tested
 *
 * Return: 1 if the nuber positive 0 if equal to zero
 * and return -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
