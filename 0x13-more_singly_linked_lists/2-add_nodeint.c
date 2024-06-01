#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning
 *
 * @head: pointer to head
 * @n: pointer to integer
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (new_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if ((*head) == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}

	new_node->n = n;

	(*head) = new_node;

	return (new_node);
}
