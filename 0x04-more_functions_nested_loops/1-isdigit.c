#include "main.h"

/**
 * _isdigit - check for digit
 * @c: The character to check
 *
 * Return: On digit 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
