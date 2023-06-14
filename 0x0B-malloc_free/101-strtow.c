#include "main.h"
/**
 * strtow - Splits a string into array of words.
 *
 * @str: String to split
 *
 * Return: Pointer to a 2D array or NULL if it fails or if str == NULL
 *         or str == "".
 */
char **strtow(char *str)
{
	char **words;
	int i, j, wc, start, len, index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	words[wc] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			start = i;
			len = 0;
			while (str[i] != ' ' && str[i])
			{
				len++;
				i++;
			}
			words[index] = malloc(sizeof(char) * (len + 1));
			if (words[index] == NULL)
			{
				free_arr(words, index);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[index][j] = str[start + j];
			words[index][j] = '\0';
			index++;
		}
	}
	return (words);
}

/**
 * count_words - Count the words in a string.
 *
 * @str: String.
 *
 * Return: Number of words in a string
 */
int count_words(char *str)
{
	int i, res = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			res++;
	}
	return (res);
}

/**
 * free_arr -  Free a 2D array.
 *
 * @arr: Array to free.
 * @len: lenght of the array.
 */
void free_arr(char **arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		free(arr[i]);
	free(arr);
}
