#include "lists.h"

/**
* delete_nodeint_at_index - Delet a node at given index from a listint_t list.
*
* @head: Head of the list.
* @index: Index of the node to remove.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (i != index - 1)
		return (-1);

	tmp = current->next;
	current->next = current->next->next;
	free(tmp);

	return (1);
}
