#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: characters to accept
 *
 * Return: number or 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j;

	if (*s == '\0' && *accept == '\0')
		return (0);
	for (i = 0, n = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] != '\0')
			n = j + 1;
	}
	return (n);
}
