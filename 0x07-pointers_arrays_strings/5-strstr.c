#include <stddef.h>

/**
 * _strstr - main function
 *
 * Description: 'Locate a substring'
 *
 * @haystack: string to search in it
 * @needle: the string to search for it
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, length = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				if (j == length - 1)
				{
					return (&haystack[i]);
				}
			}
			else
			{
				break;
			}
		}
	}
	return (NULL);
}
