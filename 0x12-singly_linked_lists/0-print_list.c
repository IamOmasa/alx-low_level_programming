#include <stdio.h>
#include <lists.h>

/**
 *print_list - a function that prints all the elements of a list_t list
 *@h: pointer to the head of next list
 * Return: node
 */

size_t print_list(const list_t *h)
{
	list_t *str;

	str = (list_t)malloc(sizeof(list_t));

	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] nil");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return count

}