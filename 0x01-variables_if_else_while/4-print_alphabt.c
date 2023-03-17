#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry piont
 *
 * Description: 'print the alphabit in lowercase using putchar and skipping
 * e and q'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low_letter = 'a';

	for (; low_letter <= 'z'; low_letter++)
	{
		if (low_letter == 'e' || low_letter == 'q')
		{
			continue;
		}
		putchar(low_letter);
	};
	putchar('\n');
	return (0);
}
