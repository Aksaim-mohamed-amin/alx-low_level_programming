#include <stdio.h>
#include <math.h>

/**
 * main - Find the largest prime factor of a number
 *
 * Return: Always 0 Success
 */

int main(void)
{
	long int i, n, max;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		n = n / 2;
		max = 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			max = i;
		}
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);
	return (0);
}
