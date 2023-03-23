#include "main.h"
/**
 * print_last_digit - main function
 *
 * Description: 'Print the last digit'
 *
 * @n : number giving
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar('0' + n);
	return (n);
}
