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
	const list_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		count++;
		tmp = tmp->next;
	}

	return (count);
}
