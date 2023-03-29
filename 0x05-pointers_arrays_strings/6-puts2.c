#include "main.h"

/**
 * puts2 - main function
 *
 * Description: 'Print every other character of a string to the stdout
 * using _putchar'
 *
 * @str: string passed to function
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
