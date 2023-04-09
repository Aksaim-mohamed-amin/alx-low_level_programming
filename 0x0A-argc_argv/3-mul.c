#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'multiply two numbers'
 *
 * @argc: number of arguments passed to the program
 * @argv: array of the argument passed to the program
 *
 * Return: the result of the multiplication
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
