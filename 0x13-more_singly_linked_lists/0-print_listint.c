#include "lists.h"

/**
 * print_listint - Print all the element of a listint_t list
 *
 * @h: The head of the list
 * Return: The number of nodes (element) in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int len = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}

	return (len);
}
