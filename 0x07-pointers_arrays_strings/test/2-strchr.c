#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: string
 * @c: character to locate
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	else
		return (&s[i]);
}
