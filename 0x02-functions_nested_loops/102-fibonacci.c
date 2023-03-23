#include <stdio.h>

/**
 * main - entrey point
 *
 * Return: always 0
 */
int main(void)
{
	long int a, b, sum;
	int i;

	printf("1, 2");
	for (a = 1, b = 2, i = 1; i < 49; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
