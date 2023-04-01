#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Find the largest prime factor of a number'
 *
 * Return: Always 0 Success
 */

int main(void)
{
	long long int n = 612852475143, i;

	for (i = n - 1; i > 0; i--)
	{
		if ((n % i) == 0)
		{
			printf("%lld\n", i);
			break;
		}
	}
	return (0);
}
