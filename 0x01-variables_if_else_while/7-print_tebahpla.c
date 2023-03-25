#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print lowercase alphabet in reverse using putchar()'
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
