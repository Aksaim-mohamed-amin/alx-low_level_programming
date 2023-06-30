#include "lists.h"

/**
 * print_list - Print a list_t list.
 *
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		printf("[%i] %s\n", tmp->len, tmp->str == NULL ? "(nill)" : tmp->str);
		tmp = tmp->next;
	}

	return (count);
}
