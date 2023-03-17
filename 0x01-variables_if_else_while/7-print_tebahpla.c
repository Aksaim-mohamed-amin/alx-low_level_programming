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
	char letter = 'z';
	char stop = 'a';

	for (; letter >= stop; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
