#include "main.h"

/**
 * puts_half -  half of a string, followed by a new line.
 *
 *@str: string
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
