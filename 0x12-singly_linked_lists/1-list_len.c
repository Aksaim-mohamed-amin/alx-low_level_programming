#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
