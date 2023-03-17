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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
