#include "stdio.h"

/**
 * print_to_98 - Print to 98 from any giving number
 *
 * @n: Number to start printing from
 */

void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);

	else if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);

	printf("98\n");
}
