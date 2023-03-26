#include <stdio.h>

/**
 * main - entrey point
 *
 * Return: always 0
 */
int main(void)
{
	long int a, b, sum = 0, fib;
	int i;

	fib = 2;
	for (a = 1, b = 2, i = 1; sum < 4000000; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum % 2) == 0)
			fib += sum;
	}
	printf("%ld\n", fib);
	return (0);
}
