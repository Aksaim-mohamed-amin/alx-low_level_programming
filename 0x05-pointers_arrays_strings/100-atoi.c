#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 *@s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int i, m;
	unsigned int n;

	for (i = 0, n = 0, m = 1; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			m = -m;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	n *= m;
	return (n);
}
