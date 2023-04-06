#include <stddef.h>

/**
 * _strchr - main function
 *
 * Description: 'Locate a character in a string'
 *
 * @s: string to search in
 * @c: character to search for
 *
 * Return: a pointer to the first occurrence of the character c, or NULL
 *         if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == '\0' && c != '\0')
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}
