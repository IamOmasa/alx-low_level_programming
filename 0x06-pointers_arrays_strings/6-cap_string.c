#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @c: pointer to char input array
 *
 * Return: capitalized words
*/

char *cap_string(char *c)
{
	int i = 0;

	/*iterate through our array values*/
	while (c[i] != '\0')
	{
		/*check for any lowercase letters*/
		if (c[i] >= 97 && c[i] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			*/
			if (i == 0)
			{
				c[i] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			*/
			if (c[i - 1] == 32 || c[i - 1] == 9 || c[i - 1] == 10 ||
				c[i - 1] == 44 || c[i - 1] == 59 || c[i - 1] == 46 ||
				c[i - 1] == 33 || c[i - 1] == 63 || c[i - 1] == 34 ||
				c[i - 1] == 40 || c[i - 1] == 41 || c[i - 1] == 123 ||
				c[i - 1] == 124)
			{
				c[i] -= 32;
			}
		}
		i++;
	}
	return (c);
}
