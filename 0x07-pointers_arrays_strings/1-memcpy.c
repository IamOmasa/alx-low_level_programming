#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer where we will copy to
 * @src: source to copy
 * @n: n bytes of @src
 *
 * Return: @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
