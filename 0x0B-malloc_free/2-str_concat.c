#include <stdlib.h>

/**
 * str_concat - main function
 *
 * Description: concatenates two strings
 *
 * @s1: first string
 * @s2: secend string
 *
 * Return: pointer to the new memory alocated for the s1 concate with s2
 *         or NULL if the NULL passed to the function
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	str = malloc((len1 + len2) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			*(str + i) = *(s1 + i);
		}
	}

	if (s2 != NULL)
	{
		for (i = 0; i < len2; i++)
		{
			*(str + len1 + i) = *(s2 + i);
		}
	}

	return (str);
}
