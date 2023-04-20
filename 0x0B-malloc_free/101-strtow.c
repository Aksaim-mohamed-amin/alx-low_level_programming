#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string
 *
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	int i, j, words_count = 0, len = 0;
	char **words;

	for (i = 0; str[i]; i++)
	{
		if (i != 0 && str[i + 1] != '\0'
		    && str[i] == ' ' && str[i - 1] != ' ')
			words_count++;
	}

	words = malloc(sizeof(char) * words_count);

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			
		}
	}
}
