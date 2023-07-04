#include "lists.h"

/**
 * listint_len - Calculate the number of nodes in a listint list.
 *
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
