#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: position
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (; head; head = head->next, free(temp))
	{
		temp = head;
		free(head->str);
	}
}
