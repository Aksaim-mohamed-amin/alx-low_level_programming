#include <ctype.h>

/**
 * _islower - Test if a charachter is lowercase
 *
 * @c: Charachter to be tested
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
