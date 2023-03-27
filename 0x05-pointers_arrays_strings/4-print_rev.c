#include "main.h"

/**
 * print_rev - main function
 *
 * Description: 'Print a string in reverse'
 *
 * @s: string passed to function
 */

void print_rev(char *s)
{
	int i, r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		r++;
	}
	for (i = r - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
