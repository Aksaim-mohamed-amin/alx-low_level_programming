#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long a, a2, a3, sum1;
	unsigned long b, b2, b3, sum2;
	int i;

	printf("1, 2");
	for (a = 1, b = 2, i = 1; i < 90; i++)
	{
		sum1 = a + b;
		printf(", %ld", sum1);
		a = b;
		b = sum1;
	}
	printf(", ");
	a2 = a % 1000;
	a = a / 1000;
	b2 = b % 1000;
	b = b / 1000;
	for (; i < 97; i++)
	{
		sum2 = (a2 + b2) / 1000;
		a3 = (a2 + b2) - sum2 * 1000;
		b3 = (a + b) + sum2;
		a2 = b2;
		b2 = a3;
		a = b;
		b = b3;
		if (a3 >= 100)
			printf("%lu%lu", b3, a3);
		else
			printf("%lu0%lu", b3, a3);
		if (i != 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}
