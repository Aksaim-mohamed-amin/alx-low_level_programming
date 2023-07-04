#include "lists.h"

/**
* insert_nodeint_at_index - Insert a node in a listint_t listint_t
*                           at a given index.
*
* @head: Head of the list.
* @idx: Index to insert the node at.
* @n: Value of the data (n) of the node inserted.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}

	if (index != idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
