#include <stdio.h>
#include <lists.h>

/**
 *print_list - a function that prints all the elements of a list_t list
 *@h: pointer to the head of next list
 * Return: node
 */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_list(const listint_t *h)
{
	
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
