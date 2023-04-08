#include "main.h"

/**
* is_prime_number - main function
*
* Description: 'take and integer and check if it is prime by testing if it is
* even or not, if it is odd it called the function is_prime
*
* @n: number you want to test
*
* Return: 0 if it is not prime and 1 if is prime
*/

int is_prime_number(int n)
{
	if (n <= 1 || (n % 2 == 0) && n != 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, n - 2));
	}
}

/**
 * is_prime - secendary function
 *
 * Description: 'get call from the main function if n is odd and it test
 * n if it is prime or not
 *
 * @n: number to test
 * @i: increment number
 *
 * Return: 0 if not prime 1 if it is prime
 */

int is_prime(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (is_prime(n, i - 1));
	}
}
