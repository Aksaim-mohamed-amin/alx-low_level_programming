#include <ctype.h>

/**
 * _isalpha - Entery point
 *
 * Description: 'Test if a charachter is lowercase'
 *
 * @c: 'charachter to be tested'
 *
 * Return: 1 if lowercase 0 if not
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
