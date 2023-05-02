#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a giving index
 *
 * @head: The head of the list
 * @index: The index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (i != index - 1)
		return (-1);

	del_node = temp->next;
	temp->next = temp->next->next;
	free(del_node);

	return (1);
}
