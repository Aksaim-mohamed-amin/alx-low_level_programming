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
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
