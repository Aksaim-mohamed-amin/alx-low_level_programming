#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table.
 * @size: Size of the sorted hash table.
 *
 * Return: Pointer to the sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *stable;

	if (size < 1)
	{
		perror("Size must be greater than 0\n");
		return (NULL);
	}

	stable = malloc(sizeof(shash_table_t));
	if (stable == NULL)
	{
		perror("Error allocating memory for the sorted hash table\n");
		return (NULL);
	}

	stable->size = size;
	stable->array = malloc(sizeof(shash_node_t *) * size);
	if (stable->array == NULL)
	{
		perror("Error allocating memory for the array of the table");
		free(stable);
		return (NULL);
	}
	stable->shead = NULL;
	stable->stail = NULL;

	for (i = 0; i < size; i++)
		stable->array[i] = NULL;

	return (stable);
}

/**
 * shash_table_set - Insert an item at the sorted hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: Kety of the new item.
 * @value: Value of the new item.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_item;
	int rv;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	rv = key_update_s(ht, key, value, index);
	if (rv == 1)
		return (1);
	if (rv == -1)
		return (0);

	new_item = create_item_s(key, value);
	if (new_item == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}

	rv = insert_dlist(new_item, ht);
	if (rv == -1)
		return (0);

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
int key_update_s(shash_table_t *ht, const char *key, const char *value,
	       unsigned long int index)
{
	shash_node_t *current = ht->array[index];
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
 * create_item_s - Create a new item to add to the hash table.
 * @key: Key of the new item.
 * @value: Value of the new item.
 *
 * Return: Pointer to the new item or NULL if the item couldnt be created.
 */
shash_node_t *create_item_s(const char *key, const char *value)
{
	shash_node_t *new_item;

	new_item = malloc(sizeof(shash_node_t));
	if (new_item == NULL)
		return (NULL);

	new_item->key = strdup(key);
	if (new_item->key == NULL)
		return (NULL);

	new_item->value = strdup(value);
	if (new_item->value == NULL)
		return (NULL);

	new_item->next = NULL;
	new_item->sprev = NULL;
	new_item->snext = NULL;

	return (new_item);
}

/**
 * insert_dlist - insert a node to a doubly linked list in sorted way
 *                depending on the key.
 * @new_item: New item to insert.
 * @ht: Pointer to the hash table
 *
 * Return: 0 if it success -1 otherwise.
 */
int insert_dlist(shash_node_t *new_item, shash_table_t *ht)
{
	shash_node_t *current;

	/**** Empty list ****/
	if (ht->shead == NULL || strcmp(new_item->key, ht->shead->key) < 0)
	{
		new_item->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_item;
		ht->shead = new_item;
		if (ht->stail == NULL)
			ht->stail = new_item;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL &&
		       strcmp(new_item->key, current->snext->key) >= 0)
			current = current->snext;

		new_item->sprev = current;
		new_item->snext = current->snext;
		if (current->snext != NULL)
			current->snext->sprev = new_item;
		current->snext = new_item;

		if (new_item->snext == NULL)
			ht->stail = new_item;
	}

	return (0);
}

/**
 * shash_table_get - Get an item from the sorted hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: The key of the item to return.
 *
 * Return: The value of the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || ht->shead == NULL)
		return (NULL);

	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Print a sorted hash table.
 * @ht: Pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (ht == NULL || ht->shead == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse.
 * @ht: Pointer to the sorted hash table in reverse.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (ht == NULL || ht->stail == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table.
 * @ht: Pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current;

	if (ht == NULL)
		return;

	if (ht->size < 1 || ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			current = ht->array[i];
			ht->array[i] = current->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
