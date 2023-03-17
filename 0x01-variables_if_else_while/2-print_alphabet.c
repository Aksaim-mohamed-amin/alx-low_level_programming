#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry piont
 *
 * Description: 'print the alphabit in lowercase using putchar'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
