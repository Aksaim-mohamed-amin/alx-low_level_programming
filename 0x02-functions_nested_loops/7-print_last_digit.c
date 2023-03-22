#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number to be checked
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -(n % 10);
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
