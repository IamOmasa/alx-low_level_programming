#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars;
 *Return: Return: the converted number, or 0 if
 *there is one or more chars in the string @b that is not 0 or 1
 *@b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* convert number by shifting to the left */
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
