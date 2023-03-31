#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 *@s: string to be changed
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL",
	     numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
	}
	return (s);
}
