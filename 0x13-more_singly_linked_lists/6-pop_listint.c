#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t
 *
 * @head: pointer to head
 * Return: integer
 */


int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int num;

	if (*head == NULL)
		return (0);

	new_node = *head;
	num = new_node->n;
	(*head) = (*head)->next;
	free(new_node);

	return (num);
}
