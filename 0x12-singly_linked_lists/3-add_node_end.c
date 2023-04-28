#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: position
 * @str: content
 *
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		for (temp = *head; temp->next; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
/**
 * _strlen - returns legth of s
 * @s: string
 *
 * Return: length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
