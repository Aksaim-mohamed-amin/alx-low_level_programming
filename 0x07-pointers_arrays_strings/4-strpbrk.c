#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: characters to accept
 *
 * Return: number or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (*s == '\0' && *accept == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] != '\0')
			break;
	}
	if (s[i] != '\0')
		return (&s[i]);
	else
		return (0);
}
