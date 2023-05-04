#include "main.h"

/**
 * flip_bits - Determine the number of bits you would need to flip to get from
 *             one number to another
 *
 * @n: First number
 * @m: Secend number
 * Return: The number of bits need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
