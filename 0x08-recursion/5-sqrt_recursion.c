#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 *
 * @n: Number to calculate it natural square.
 *
 * Return: Natural square of n, or -1 if n does not have a natural square.
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
}

/**
 * check_sqrt - Check if i is the natural square of n.
 *
 * @n: Number searching for it square
 * @i: Number to check if it is the square number
 *
 * Return: -1 if n < 0 or the natural square does not exicst, i if it it the
 *         natural square
 */
int check_sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_sqrt(n, i + 1));
}
