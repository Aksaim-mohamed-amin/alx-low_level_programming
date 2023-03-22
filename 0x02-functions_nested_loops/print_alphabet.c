#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Desciption: ' print alphabet to stdout using _putchar'
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar( letter );
	}
	_putchar('\n');
}
