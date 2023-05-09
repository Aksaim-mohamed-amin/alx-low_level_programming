#include "lists.h"

/**
 *
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
