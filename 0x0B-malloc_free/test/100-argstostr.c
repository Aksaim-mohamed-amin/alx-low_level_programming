#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: argument string
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (len = 0, i = 0; i < ac; i++, len++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			;
	}
	p = (char *)malloc((sizeof(char) * len) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
	}
	p[k] = '\0';
	return (p);
}
