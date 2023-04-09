#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'multiply two numbers'
 *
 * Return: the result of the multiplication
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum;

		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
