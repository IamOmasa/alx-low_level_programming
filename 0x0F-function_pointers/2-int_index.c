#include <stddef.h>
#include <stdbool.h>
#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 *Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == true)
				return (i);
		}
	}
}
