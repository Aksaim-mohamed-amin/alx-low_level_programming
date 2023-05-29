#include <ctype.h>

/**
 * _isalpha - Entery point
 *
 * _isalpha - Test if a charachter is alphabet or not
 *
 * @c: Charachter to be tested
 *
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
