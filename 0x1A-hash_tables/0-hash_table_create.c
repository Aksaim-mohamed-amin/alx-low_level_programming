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
	unsigned long int i;

	if (size < 1)
	{
		perror("Siaze of the hash table must be greater than 0\n");
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		perror("Error allocating memory for the hash table\n");
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		perror("Error allocating memory for the array");
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
