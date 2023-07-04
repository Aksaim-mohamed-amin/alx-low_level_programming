#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 *               the head node’s data (n).
 *
 * @head: The head of the list.
 *
 * Return: The head node data (n) or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (value);
}
