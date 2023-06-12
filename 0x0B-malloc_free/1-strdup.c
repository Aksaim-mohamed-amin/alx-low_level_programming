#include "main.h"

/**
 * _strdup - Create a newly allocated space in memory, which contains a copy of
 *           the string given as a parameter (Dupmicate a string).
 *
 * @str: String to duplicate.
 *
 * Return: Pointer to the new string, and NULL if the string is NULL or
 *         insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	copy = malloc(sizeof(char) * size + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
