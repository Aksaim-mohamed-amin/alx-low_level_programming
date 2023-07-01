#include "lists.h"

/**
 * free_list - Free a list_t list.
 *
 * @head: Head of the list.
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
