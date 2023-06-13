#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program in a new string.
 *
 * @ac: Argument count.
 * @av: Argument vecteur.
 *
 * Return: Pointer to the new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, index = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += _strlen(av[i]);

	args = malloc(sizeof(char) * size + 1);
	if (args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[index++] = av[i][j];
		}
		args[index++] = '\n';
	}
	args[index] = '\0';

	return (args);
}

/**
 * _strlen - Calculate the lenght of a string
 *
 * @str: String to calculate it lenght.
 *
 * Return: The lenght of the string.
 */
int _strlen(char *str)
{
	int len = 0, i;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
