#include "lists.h"

/**
 * sum_listint - Calculate the sum of the data (n) of a listint_t list.
 *
 * @head: Head of the listint_t list.
 *
 * Return: The sum of the data (n) of a listint_t list,
 *         or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
