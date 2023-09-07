#include "hash_tables.h"

/**
 * hash_table_create - Create a hash tabel.
 * @size: Size of the hash table.
 *
 * Return: Pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = NULL;

	return (table);
}
