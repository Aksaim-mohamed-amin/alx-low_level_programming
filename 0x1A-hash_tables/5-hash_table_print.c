#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				printf("'%s: ''%s'", current->key, current->value);
				if (current->next != NULL)
					printf(", ");
				current = current->next;
			}
		}
		printf("}\n");
	}
}
