#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the name of the program'
 *
 * Return: 0 (Succese)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
