#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: int square root.
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - returns the natural square root of a number.
 *
 * @n: int
 * @i: incremented int
 *
 * Return: int square root.
 */
int square_root(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
