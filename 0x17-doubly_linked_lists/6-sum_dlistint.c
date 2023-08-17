#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the data (n) of a dlistint_t list.
 * @head: The head of the list.
 *
 * Return: The sum of all the data (n) of a dlistint_t list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
