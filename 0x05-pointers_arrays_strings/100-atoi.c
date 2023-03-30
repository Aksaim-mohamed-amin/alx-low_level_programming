#include <ctype.h>

/**
 * _atoi - main function
 *
 * Description: 'Convert a string to an integer'
 *
 * @s: string to convert
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int i, res = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';

			if(s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}
	}
	return (sign * res);
}
