#include "lists.h"

/**
 *free_listint2 - a function that frees a listint_t
 *
 * @head: pointer to head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *last, *curr_node;

	if (head != NULL)
	{
		/* set head to current element */
		last = *head;

		/* set cureent node to curr_node*/
		while ((curr_node = last) != NULL)
		{
			last = last->next;
			free(curr_node);
		}
		*head = NULL;
	}
}
