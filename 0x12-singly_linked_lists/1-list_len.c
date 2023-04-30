#include "lists.h"

/**
 * list_len - Count the length of a list
 *
 * @h: The head of the list
 * Return: The length of a list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
