#include "lists.h"

/**
 * free_listint2 - Free a listint list and set he head to null.
 *
 * @head: Head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
