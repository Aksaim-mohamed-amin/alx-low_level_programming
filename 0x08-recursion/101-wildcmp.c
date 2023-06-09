#include "main.h"

/**
 * wildcmp - Compares two strings, string can contain wild cars '*'.
 *
 * @s1: First String
 * @s2: Secend String it can contain the wild card
 *
 * Return: 1 if they are the same , 0 if they are diffrent.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0')
	{
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);
	}

	if (*s2 == '\0')
	{
		if (*(s2 - 1) == '*')
			return (1);
	}

	if (*s2 == '*' && *s1 != '\0')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
