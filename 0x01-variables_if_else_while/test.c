#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry piont
 *
 * Description: 'this programe will compar the last digit of a random number to
 * 5'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else if (last_digit != 0 && last_digit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
