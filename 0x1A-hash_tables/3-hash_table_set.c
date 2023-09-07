#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table,
 *      and In case of collision, add the new node at the beginning of the list
 * @ht: Pointer to the hash table.
 * @key: Key of the element to add.
 * @value: Value of the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int rv;
	hash_node_t *new_item;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size < 1 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* check if the key exist and update it value */
	rv = key_update(ht, key, value, index);
	if (rv == 1)
		return (1);
	else if (rv == -1)
		return (0);

	new_item = create_item(key, value);
	if (new_item == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}

	return (1);
}

/**
 * key_update - Check if the new item already exist if yes update it value.
 * @ht: Pointer to the hash table.
 * @key: key of the new item.
 * @value: Value of the new item.
 * @index: Index of the new item in the array.
 *
 * Return: 1 if the item already exist and it got updated, -1 if the item value
 *         couldnt be updated, 0 if the item doesnt exist in the hash table.
 */
int key_update(hash_table_t *ht, const char *key, const char *value,
	       unsigned long int index)
{
	hash_node_t *current = ht->array[index];
	char *new_value;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (-1);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	return (0);
}

/**
 * create_item - Create a new item to add to the hash table.
 * @key: Key of the new item.
 * @value: Value of the new item.
 *
 * Return: Pointer to the new item or NULL if the item couldnt be created.
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (NULL);

	new_item->key = strdup(key);
	if (new_item->key == NULL)
		return (NULL);

	new_item->value = strdup(value);
	if (new_item->value == NULL)
		return (NULL);

	new_item->next = NULL;

	return (new_item);
}
