#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number or 0 if b contain a character or if it is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len = 0, i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		len++;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; i < len; i++)
	{
		res += (b[i] - '0') * _pow(2, (len - i - 1));
	}

	return (res);
}

/**
 * _pow - Calculate the power of a number
 *
 * @x: Number
 * @y: The power of the number
 * Return: x power to y (x^y)
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}
