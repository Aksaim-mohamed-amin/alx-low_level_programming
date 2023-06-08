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
	return (palindrome(s, 0, str_len(s) - 1));
}


/**
 * str_len - main function
 *
 * Description: 'calculate the length of a string'
 *
 * @s: string to calcule the length of it
 *
 * Return: the length of the string s
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * palindrome - main function
 *
 * Description: 'test if a string is palindrome or not'
 *
 * @s: string to test
 * @start: string start point
 * @end: string end point
 *
 * Return: 1 if it is palindrome 0 if not
 */

int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome(s, start + 1, end - 1));
}
