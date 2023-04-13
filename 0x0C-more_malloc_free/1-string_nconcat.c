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
	unsigned int i, len = n;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];

	str[len] = '\0';

	return (str);
}
