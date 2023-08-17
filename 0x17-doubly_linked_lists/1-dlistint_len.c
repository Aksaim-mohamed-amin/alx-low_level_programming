#include "lists.h"

/**
 * dlistint_len - Count the number of elements in a dlistint_t list
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		elements++;
		tmp = tmp->next;
	}

	return (elements);
}
