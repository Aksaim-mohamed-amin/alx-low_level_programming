#include <stdlib.h>

/**
 * argstostr - main function
 *
 * Desciption: 'concatenates all the arguments of your program'
 *
 * @ac: arguments count
 * @av: argumment vecteur
 *
 * Return: a pointer to the new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len++;
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i ++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\n';
	}
	str[k] = '\0';
	return (str);
}
