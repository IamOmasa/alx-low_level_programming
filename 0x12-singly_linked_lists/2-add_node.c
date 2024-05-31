#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list_t
 *
 *@head: pointer to the head
 *@str:pointer to string
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);

	list_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		++str_len;

	new_node = malloc(sizeof(list_t));

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
