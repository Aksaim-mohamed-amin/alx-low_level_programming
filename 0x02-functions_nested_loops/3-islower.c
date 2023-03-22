#include <ctype.h>

/**
 * _islower - main function
 *
 * Description: 'Test if a letter is lowercase or not'
 *
 * @c: is the letter pased to the function to test
 *
 * Return: 1 if lower case o if not.
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
