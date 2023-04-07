#include "main.h"

/**
 * is_palindrome - palindromes.
 *
 * @s: string
 *
 * Return: 0 or 1;
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	if (len == 0)
		return (1);
	return (cmp(s, len, 0));
}

/**
  * str_len - calculates string length
  *
  * @s: string
  *
  * Return: int
  */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (str_len(s + 1) + 1);
}

/**
 * cmp - compares string characters
 *
 * @s: string
 * @len: string length
 * @i: incrementing int
 *
 * Return: 0 or 1.
 */
int cmp(char *s, int len, int i)
{
	int half_len = len / 2;

	if (i > half_len - 1)
		return (1);
	if (s[i] != s[len - 1 - i])
		return (0);
	return (cmp(s, len, i + 1));
}
