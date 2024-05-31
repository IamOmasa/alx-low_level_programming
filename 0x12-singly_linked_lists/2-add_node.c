#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list_t
 *
 *@head: pointer to head
 *@str:pointer to string
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
