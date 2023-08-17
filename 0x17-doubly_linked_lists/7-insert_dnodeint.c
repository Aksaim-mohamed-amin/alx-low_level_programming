#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	/* Check if the node will be added at the begining of the list */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Travle the node to the index */
	current = *h;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* Check if the idx given is biger than the list size */
	if (i != idx - 1)
		return (NULL);

	/* Check if the node will be added at the end of the list */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Add the node in idx position */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
