#include "main.h"

/**
 * _print_rev_recursion - main function
 *
 * Description: 'Print a string in reverse using putchar and recursion'
 *
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
