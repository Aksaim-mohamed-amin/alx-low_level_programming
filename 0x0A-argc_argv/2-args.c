#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all arguments entered to the programe'
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
