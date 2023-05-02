#include "lists.h"

/**
 * find_listint_loop - finds the starting node of a loop in a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the starting node of the loop,
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = head->next->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
