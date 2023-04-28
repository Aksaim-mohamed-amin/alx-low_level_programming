#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
	}
	return (i);
}
