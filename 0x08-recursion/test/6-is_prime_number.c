#include "main.h"

/**
 * is_prime_number - checks for prime numbers.
 *
 * @n: int
 *
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - checks for prime numbers.
 *
 * @n: int
 * @i: incremented int
 *
 * Return: 0 or 1.
 */
int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0 && i < n)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
