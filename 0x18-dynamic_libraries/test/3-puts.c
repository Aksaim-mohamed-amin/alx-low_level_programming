#include "main.h"

/**
 * _puts - main function
 *
 * Description: 'Print a string to the stdout using _putchar'
 *
 * @str: string passed to function
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
