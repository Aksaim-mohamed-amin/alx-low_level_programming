#include <stdio.h>

/**
 * main - print the size of each variable
 *
 * Return: always 0
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
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
