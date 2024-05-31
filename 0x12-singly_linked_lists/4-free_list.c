#include "lists.h"

/**
 *free_list - a function that frees a list_t
 *@head: pointer to head
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *next_data;

	while ((next_data = head) != NULL)
	{
		head = head->next;
		free(next_data->str);
		free(next_data);
	}
}
