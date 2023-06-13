#include "main.h"

/**
 * strtow - Splits a string into words.
 *
 * @str: String to split.
 *
 * Return: Pointer to the array that contains the words,
 *         and NULL if str is NULL or "".
 */
char **strtow(char *str)
{
	int i, j, wcount = 0, wlen, wstart, index = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			wcount++;

	words = malloc(sizeof(char *) * (wcount + 1));
	if (words == NULL)
		return (NULL);

	words[wcount] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] != ' ')
		{
			wstart = i;
			wlen = 0;
			while (str[i] != ' ' && str[i + 1] != '\0')
			{
				wlen++;
				i++;
			}
			words[index] = malloc(sizeof(char) * wlen);
			if (words[index] == NULL)
			{
				while (index >= 0)
					free(words[index--]);
				free(words);
			}
			for (j = 0; j < wlen; j++)
				words[index][j] = str[wstart + j];
			word[index++][j] = '\0';
		}
	}
	return (words);
}
