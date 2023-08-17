#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: Head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
