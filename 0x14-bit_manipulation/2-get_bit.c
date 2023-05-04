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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
