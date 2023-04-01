#include "main.h"

/**
 * _isupper - check if the character is upper case
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
