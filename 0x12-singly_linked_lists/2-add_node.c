#include "lists.h"

/**
 * add_node - Add a node at the beginning of a list_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to add to the node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = string;
	new_node->len = _strlen(string);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String passed to the function.
 *
 * Return: The lenght of a string.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
