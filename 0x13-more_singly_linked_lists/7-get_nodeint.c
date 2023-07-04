#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list.
 *
 * @head: Head of the list.
 * @index: Index of the node to get.
 *
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
