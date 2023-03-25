#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Generate a random number and test if it is negative, positive
 * or equal to zero'
 *
 * Return: Always 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
