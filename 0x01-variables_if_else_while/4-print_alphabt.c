#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print the alphabet using putchar()
 * and sekkiping the two letter q end e'
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
