#include <stdlib.h>

/**
 * _strdup()-function returns a pointer to a new string which is a duplicate
 *             of the string str
 * @str: input string
 *
 *Return: NULL or @str
 */

char *_strdup(char *str)
{
	int i = 0, lng = 0;
	char *s;

	if (str == NULL)
		return (NULL)

	while (str[lng] != '\0')
		l++;

	s = malloc((lng + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	free(s);

	return (s);
}
