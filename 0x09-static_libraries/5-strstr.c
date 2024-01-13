#include "main.h"
/**
 *_strstr - function finds the first occurrence of the substring needle
 * in the string haystack
 *
 *@haystack: string to search
 *
 *@needle: substring
 *
 *Return: pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
