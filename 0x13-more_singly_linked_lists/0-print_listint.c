#include "lists.h"

/**
 * print_listint - Print a listint list.
 *
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
