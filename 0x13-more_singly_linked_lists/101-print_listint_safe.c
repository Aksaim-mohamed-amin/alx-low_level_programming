#include "lists.h"

/**
 * print_listint_safe - Print a listint-t list safley (detect loop)
 *
 * @head: The head of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	int count = 0;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;

		if (count > 100)
			exit(98);
	}

	return (count);
}
