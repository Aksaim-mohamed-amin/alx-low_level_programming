#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 *
 * @h: The head of the list
 * Return: The number of elements (nods) in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		n++;
		printf("[%i] %s\n", temp->len, temp->str != NULL ? temp->str : "(nil)");
		temp = temp->next;
	}

	return (n);
}
