#include "lists.h"

/**
 * listint_len - Count the number of element in a listint_t list
 *
 * @h: The head of the list
 * Return: The number of nodes (element) in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int len = 0;

	temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
