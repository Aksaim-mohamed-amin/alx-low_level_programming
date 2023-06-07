#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 *
 * @n: Number to calculate it factorial
 *
 * Return: The factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
