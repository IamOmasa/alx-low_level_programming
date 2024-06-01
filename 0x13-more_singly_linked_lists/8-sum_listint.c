#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the data
 *
 * @head: pointer to the head
 *
 * Return: sum of n or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* add next value of n*/
		sum += head->n;

		/* check the next node */
		head = head->next;
	}

	return (sum);
}
