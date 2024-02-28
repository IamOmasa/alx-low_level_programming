#include <stdlib.h>

/**
 *create_array()-function to creates an array of chars, and initializes
 *               it with a specific char.
 *
 *@c: initial character
 *@size: array size
 *
 *Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
