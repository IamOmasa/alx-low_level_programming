#include "main.h"

/**
 *print_array - a function that prints n elements of an array of integers
 *
 * @a: array of integers
 * @n:  number of elements of the array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	/*initialize incrementor*/
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
