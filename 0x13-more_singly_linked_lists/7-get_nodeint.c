#include "lists.h"

/**
 *get_nodeint_at_index -  function that returns the nth node
 *
 * @head: pointer to the head
 * @index: index of nth node
 *
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		++i;
	}
	return (NULL);
}
