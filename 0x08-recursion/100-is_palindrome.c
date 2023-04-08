#include "main.h"

/**
 * is_palindrome - main function
 *
 * Description: 'check if a string is palindrome or not'
 *
 * @s: string passed to the function
 *
 * Return: 1 if the string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return(palindrome(s, 0, length - 1));
}

/**
 *
 */

int palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return(1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome(s, start + 1, end - 1));
}
