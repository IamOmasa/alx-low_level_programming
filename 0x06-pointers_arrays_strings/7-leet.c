#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @c: string input
 *
 * Return: encode
*/

char *leet(char *c)
{
	int i, j;
	char leet_ref[10] = "aAeEoOtTlL";
	char leet_replace[10] = "4433007711";

	/*iterate values in array c*/
	/**
	* loop through array value five times
	* to check if the value is equal to
	* any small letter in array sl or
	* upper letter in array ul and if it
	* is replace it with the value in array n
	*/
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == leet_ref[j])
			{
				c[i] = leet_replace[j];
				break;
			}
		}

	}
	return (c);
}
