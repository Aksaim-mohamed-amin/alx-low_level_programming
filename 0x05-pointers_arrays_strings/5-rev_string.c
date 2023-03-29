#include "main.h"

/**
 * rev_string - main function
 *
 * Description: 'Reverse a string'
 *
 * @s: string passed to function
 */

void rev_string(char *s)
{
	int i, length = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < (length - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
