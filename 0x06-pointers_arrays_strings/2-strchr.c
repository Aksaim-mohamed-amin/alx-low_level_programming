#include <stddef.h>

/**
 * _strchr - main function
 *
 * Description: 'locate a character in a string'
 *
 * @s: string to search in
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s
 *         ot NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
