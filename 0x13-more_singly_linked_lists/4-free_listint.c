#include "lists.h"

/**
 * free_listint - Free a listint list.
 *
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
