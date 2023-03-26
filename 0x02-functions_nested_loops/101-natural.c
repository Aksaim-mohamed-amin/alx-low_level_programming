#include <stdio.h>

/**
 * main - entrey point
 *
 * Return: always 0
 */
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
}
