#include <ctype.h>

/**
 * _isalpha - main function
 *
 * Description: 'Test if the character is alphabet or not'
 *
 * @c: is the letter pased to the function to test
 *
 * Return: 1 if alphabet 0 if not.
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
