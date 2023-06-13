#include "main.h"

/**
 * strtow - Splits a string into words.
 *
 * @str: String to split.
 *
 * Return: Pointer to the array that contains the words, and NULL if str is NULL
 *         or "".
 */
char **strtow(char *str)
{
	int i , height = 0;
	char **words;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != " " && str[i + 1] == " ")
			height++;
	}

	words = malloc(sizeof(char *) * height);
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if(str[i] != " " && str[i + 1] != " ")
		{
			
		}
	}
}
