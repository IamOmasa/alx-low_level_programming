#include "lists.h"

/**
 *add_node_end - function to add node at the end
 *
 * @head: pointer to head
 * @str: pointer to string
 *
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t str_len = 0;

	while (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		++str_len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
