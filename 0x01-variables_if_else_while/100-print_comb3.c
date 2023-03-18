#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry piont
 *
 * Description: 'print all the single digit nubers of base 10'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
