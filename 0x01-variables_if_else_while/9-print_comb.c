#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all possibe combinations of singel-digit numbers
 *  using putchar'
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
