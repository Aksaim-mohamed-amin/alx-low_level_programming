#include "main.h"

/**
 * is_prime_number - Check if a number is prime number or not.
 *
 * @n: Number to ckeck.
 *
 * Return: 1 if n is prime number 0 if not.
 */
int is_prime_number(int n)
{
	if (n < 0 || ((n % 2 == 0) && (n != 2)))
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(n, n - 2));
}

/**
 * check_prime - check for the prime number of n
 *
 * @n: Number to check for it prime
 * @i: Number to start from
 *
 * Return: 1 if the number is prime, 0 if not.
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}
