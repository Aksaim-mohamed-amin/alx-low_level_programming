#include "main.h"

/**
 * is_palindrome - Check if a string is palindrome or not.
 *
 * @s: String to check.
 *
 * Return: 1 if the string is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - check if a string is palindrome.
 *
 * @s: String to check.
 * @start: Index to start from.
 * @end: Index to end at.
 *
 * Return: 1 if palindrome 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Calculate the length of a string, using recursion
 *
 * @s: String to calculate it length
 *
 * Return: Length of the string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
