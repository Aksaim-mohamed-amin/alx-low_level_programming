#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list of integers.
 *
 * @h: A pointer to a pointer to the head node of the linked list.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *visited[1024];
	listint_t *current = *h;

	while (current != NULL && num < 1024)
	{
		size_t i;

		for (i = 0; i < num; i++)
		{
			if (current == visited[i])
			{
				size_t j;

				for (j = i; j < num; j++)
					visited[j]->next = NULL;

				*h = NULL;
				return (num);
			}
		}

		visited[num++] = current;
		current = current->next;
		free(visited[num - 1]);
	}

	*h = NULL;
	return (num);
}
