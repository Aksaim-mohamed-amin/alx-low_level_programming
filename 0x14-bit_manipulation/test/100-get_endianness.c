#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;

	return (x & 1);
}
