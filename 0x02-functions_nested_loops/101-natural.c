#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'computes and prints the sum of all the miltiples
 * of 3 and 5 below 1024 (excluded)
 *
 * Return: the sum
 */

int main(void)
{
	int x, sum;

	x = 1023;
	sum = 0;

	for (; x > 0; x--)
		if (x % 5 == 0 || x % 3 == 0)
			sum += x;

	printf("%d\n", sum);
	return (0);
}
