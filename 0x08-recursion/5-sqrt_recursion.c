#include "main.h"

/**
 * _sqrt_recursion - main function
 *
 * Description: 'find the natural square root of a number'
 *
 * @n: number giving to the function
 *
 * Return: the square root of a number or -1 if it doesnt exist
 */

int _sqrt_recursion(int n)
{
	return (sqrt_root(n, 1));
}

/**
 * sqrt_root - main function
 *
 * Description: 'calculate the square root of n'
 *
 * @n: number
 * @i: incremment
 *
 * Return: the square root of n
 */

int sqrt_root(int n, int i)
{
	if (n < 0 || i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_root(n , i + 1));
}
