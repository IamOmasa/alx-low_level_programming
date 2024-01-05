#include "main.h"
/**
 *string_toupper -  a function that changes all lowercase letters
 * of a string to uppercase
 *
 *@c : pointer to input char
 *
 *Return: uppercase letters
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
