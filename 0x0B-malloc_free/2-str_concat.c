#include <stdlib.h>

/**
 *str_concat()-function that concatenates two strings
 *
 * @s1: string input
 * @s2: string output
 *
 * Return: NULL or failure
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of the string*/
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	/*allocate memory for the string*/
	s = malloc((a * sizeof(char) + ((b + 1) * sizeof(char));

	/*concatenate using for loop*/
	if (s == NULL)
		return (NULL);

	/*add strings to an array s*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	/*terminate string s*/
	s[i] = '\0';

	return (s);

}
