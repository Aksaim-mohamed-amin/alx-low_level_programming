#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 *
 * @n: Number.
 * @index: Index of the bit.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
