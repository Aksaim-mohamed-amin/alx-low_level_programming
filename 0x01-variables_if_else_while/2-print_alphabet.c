#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the alphabet using putchar()'
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		putchar('0' + letter);
	}
	putchar('\n');
	return (0);
}
