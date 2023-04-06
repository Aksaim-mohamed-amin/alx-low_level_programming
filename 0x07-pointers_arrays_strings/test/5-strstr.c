#include <stdio.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: string
 * @needle: string looking for
 *
 * Return: location or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*haystack == '\0' && *needle == '\0')
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
