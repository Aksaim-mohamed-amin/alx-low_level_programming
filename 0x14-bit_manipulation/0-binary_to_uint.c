#include "main.h"

/**
 * binary_to_uint - Converets a binary to an unsigned int.
 *
 * @b: String that contain a binary number only '0' and '1'.
 *
 * Return: The converted number or 0 if b is NULL, or there is one
 *         chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, num = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	for (i = 0; b[i]; i++)
		num += (b[i] - '0') * _pow(2, len - i - 1);

	return (num);
}

/**
 * _pow - Calculate the power of x to y.
 *
 * @x: Number.
 * @y: Power.
 *
 * Return: The power of x to y.
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}
