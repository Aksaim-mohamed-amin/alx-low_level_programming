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
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	str = (char *)malloc((len1 + len2) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < n && i < len2; i++)
		str[len1 + i] = s2[i];

	return (str);
}
