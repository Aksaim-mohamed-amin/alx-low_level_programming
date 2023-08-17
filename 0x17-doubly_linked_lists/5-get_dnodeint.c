#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of a dlistint_t linked list.
 * @head: The head of the list.
 * @index: The index of the node to return.
 *
 * Return: The nth node of the list or NULL if the node doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != index)
		return (NULL);
	return (tmp);
}
