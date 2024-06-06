#include "main.h"

/**
 *_strcpy -  a function that copies the string pointed to by src
 *
 * @dest: pointer to copied string
 * @src: pointer to string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	size_t i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		++j;
	}

	dest[j] = '\0';

	return (dest);
}
