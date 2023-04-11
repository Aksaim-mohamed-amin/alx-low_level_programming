#include <stdlib.h>

/**
 * _strdup - main function
 *
 * Description: create a duplicate of a string
 *
 * @str: string you want to duplicate
 *
 * Return: pointer to the duplicated string or NULL if an error happend
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	p = malloc((len * sizeof(char)) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
