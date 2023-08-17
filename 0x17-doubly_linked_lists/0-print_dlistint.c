#include "lists.h"

/**
 * print_dlistint- Prints all the elements of a dlistint_t list.
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		elements++;
		tmp = tmp->next;
	}

	return (elements);
}
