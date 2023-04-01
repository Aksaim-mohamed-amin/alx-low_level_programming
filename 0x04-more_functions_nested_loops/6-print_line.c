#include "main.h"

/**
 * print_line - main function
 *
 * Description: 'draw a stright line in the terminal using _'
 *
 * @n: the length of the line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
