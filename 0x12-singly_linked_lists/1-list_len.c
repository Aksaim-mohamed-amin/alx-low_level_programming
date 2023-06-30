#include "lists.h"

/**
 * list_len - Calculate the lenght of a list_t list.
 *
 * @h: The head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);
}
