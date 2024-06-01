#include "lists.h"

/**
 *free_listint - a function that frees a listint_t
 *
 *@head: pointer to head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *element;

	while ((element = head) != NULL)
	{
		head = head->next;
		free(element);
	}
}
