#include <stdio.h>

/**
 * main - Print numbers from 1 to 100, but for multiples of 3
 *        print Fizz, and for the multiple of 5 print Buzz,
 *        and for the numbers who are multiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf(" Fizz");

		else if ((i % 5) == 0 && (i % 3) != 0)
			printf(" Buzz");

		else if ((i % 5) == 0 && (i % 3) == 0)
			printf(" FizzBuzz");

		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
