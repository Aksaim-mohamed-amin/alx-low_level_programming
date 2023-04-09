#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all arguments entered to the programe'
 *
 * @argc: number of arguments passed to the programe
 * @argv: array of the argument passed to the program
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
