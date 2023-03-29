#include "main.h"

/**
 * puts_half - main function
 *
 * Description: 'Print the sececend half of a string'
 *
 * @s: string passed to function
 */

void puts_half(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (i >= (length) / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
