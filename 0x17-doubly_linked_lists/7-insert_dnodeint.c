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
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		if (*h != NULL)
			new_node->next = *h;
		else
			new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	tmp = *h;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != idx - 1)
		return (NULL);

	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next = new_node;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	return (new_node);
}
