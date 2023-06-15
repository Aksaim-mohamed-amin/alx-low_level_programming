#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: First string
 * @s2: Secend string
 * @n: Number of characters to concate
 *
 * Return: Pointer to the new allocated string, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = n > len2 ? len2 : n;

	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + n] = '\0';

	return (str);
}

/**
 * _strlen -  Calculat the lenght of a string
 *
 * @str: String
 *
 * Return: the lenght of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
