#include "lists.h"

/**
 *print_listint - a function that prints all the elements of a listint_t
 *
 *@h: pointer to head
 *
 * Return: element
 */

size_t print_listint(const listint_t *h)
{
	size_t node_number = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/* print integer n */
		printf("%d\n", h->n);

		h = h->next;

		++node_number;
	}

	printf("%d\n", h->n);

	return (node_number);

}
