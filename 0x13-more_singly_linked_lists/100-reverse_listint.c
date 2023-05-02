#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list
 *
 * @head: The head of the list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
