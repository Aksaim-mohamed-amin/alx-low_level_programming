#include "main.h"

/**
 * get_bit - Find value of a bit at a given index
 *
 * @n: Number
 * @index: Index of the bit in the number
 * Return: The value of the bit or -1 in case of an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);

	return (-1);
}
