#include "lists.h"

/**
 * add_node_end - Add a node to the end of a list
 *
 * @head: The head of the list
 * @str: Value of the str in the node
 * Return: The address of the new element or NULL if it faild
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tail;

	/* Create the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = str_len(str);
	new_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;

	return (new_node);
}
/**
 * str_len - Calculate the length of a string
 *
 * @str: String passed to the function
 * Return: The length of the string
 */
int str_len(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}
