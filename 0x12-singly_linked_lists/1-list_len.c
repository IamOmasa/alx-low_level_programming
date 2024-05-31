#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *
 * @h: head
 *
 *Return: size of list
 */

size_t list_len(const list_t *h)
{
	int node_size = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		/* iterate to next node */
		h = h->next;

		/* count */
		++node_size;

	}

	return (node_size);
}
