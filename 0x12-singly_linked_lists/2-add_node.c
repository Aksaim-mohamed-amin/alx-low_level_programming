#include "lists.h"

/**
 * add_node - returns the number of elements in a linked list_t list.
 * @head: position
 * @str: content
 *
 * Return: address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
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
