#include "lists.h"

/**
 * find_listint_loop - Find a loop in a listint_t list.
 *
 * @head: Head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	slow = head;
	fast = head;

	while (slow && fast)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (fast);
		}
	}

	return (NULL);
}
