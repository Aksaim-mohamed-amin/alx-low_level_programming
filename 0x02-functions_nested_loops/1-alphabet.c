#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'print the alphabet using _putchar'
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
