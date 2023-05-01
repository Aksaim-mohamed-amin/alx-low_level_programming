#include "lists.h"

/**
 * add_nodeint_end - Add a new node to the end of a listint_t list
 *
 * @head: The head of the list
 * @n: Value add to the node
 * Return: Address of the new node, or NULL if it faild
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;

	return (new_node);
}
