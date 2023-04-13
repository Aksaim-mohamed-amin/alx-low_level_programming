#include <stdlib.h>

/**
 * string_nconcat - main function
 *
 * Description: 'concat string 1 to n beyts from string 2'
 *
 * @s1: first string
 * @s2: secend string
 * @n: number of bytes to concat
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}

	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}

	if (n >= len2)
		n = len2;

	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];

	str[len1 + len2] = '\0';

	return (str);
}
