#include "lists.h"

/**
 * sum_listint - Calculate sum of all the data (n) of a listint_t linked list
 *
 * @head: The head of the list
 * Return: The sum of all the data (n) in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
