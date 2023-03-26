#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entrey point
 *
 * Description: 'print the last digit of a number'
 *
 * @n: number entered
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar('0' + abs(last_digit));
	return (abs(last_digit));
}
