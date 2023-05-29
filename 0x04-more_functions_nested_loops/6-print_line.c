#include "main.h"

/**
 * print_line - Draw a stright line in the terminal using '_'
 *
 * @n: Length of the line
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
