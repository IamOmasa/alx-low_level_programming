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
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == '\0')
			dest = dest + '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
