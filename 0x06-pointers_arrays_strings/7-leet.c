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
	int i, s = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (c[s] != '\0')
	{
i		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array sl or
		 * upper letter in array ul and if it
		 * is replace it with the value in array n
		*/
		for (i = 0; i < 5; i++)
		{
			if (c[s] == sl[i] || c[s] == ul[i])
			{
				c[s] = n[i];
				break;
			}
		}
		s++;
	}
	return (c);
}
