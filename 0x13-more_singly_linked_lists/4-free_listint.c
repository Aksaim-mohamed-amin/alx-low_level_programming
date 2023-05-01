#include "lists.h"

/**
 * free_listint - Free a listint_t list
 *
 * @head: The head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
