#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line
 *
 *@n: number
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%i, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%i, ", n);
	}
	printf("98\n");
}
