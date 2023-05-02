#include "lists.h"

/**
 * get_nodeint_at_index - Travers a listint_t list untill the requiered node
 *
 * @head: The head of the list
 * @index: The index of the requered node
 * Return: The address of the node or NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (temp);
}
