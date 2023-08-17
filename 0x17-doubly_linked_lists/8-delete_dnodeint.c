#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a linked list.
 * @head: Head of the list.
 * @indx: The index of the node that should be deleted.
 *
 * Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	if (current == *head)
		*head = current->next;

	free(current);

	return (1);
}
