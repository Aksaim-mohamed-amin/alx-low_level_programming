#include "hash_tables.h"

/**
 * hash_djb2 - Implement the djb2 algorithem to the keys to get the hash index.
 * @str: Key you want to hash.
 *
 * Return: A value that represent the string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
