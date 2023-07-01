#include "lists.h"

/**
 * list_len -  Calculat the lenght of a list_t list.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
