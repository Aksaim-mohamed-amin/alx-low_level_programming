#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers.
 *
 * @head: A pointer to the head node of the linked list.
 * Return: The number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited[1024];
	size_t num = 0, i;

	while (head != NULL && num  < 1024)
	{
		for (i = 0; i < num; i++)
		{
			if (head == visited[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num);
			}
		}

		visited[num++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (num);
}
