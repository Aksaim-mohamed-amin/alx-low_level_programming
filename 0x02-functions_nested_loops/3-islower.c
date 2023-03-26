#include <ctype.h>

/**
 * _islower - Entery point
 *
 * Description: 'Test if a charachter is lowercase'
 *
 * @c: 'charachter to be tested'
 *
 * Return: 1 if lowercase 0 if not
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
