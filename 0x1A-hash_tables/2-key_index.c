#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to hash.
 * @size: Size of the array of the hash table.
 *
 * Return: The index of the key in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
