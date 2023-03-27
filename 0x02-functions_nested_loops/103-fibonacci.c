#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the 50 first fibonacci number starting from 1 and 2'
 *
 * Return: always 0 success
 */

int main(void)
{
	long int a = 1, b = 2, sum, result = 0;
	int i;

	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		if(sum % 2 == 0)
		{
			result += sum;
		}
		a = b;
		b = sum;
	}
	printf("%ld\n", result);
	return (0);
}
