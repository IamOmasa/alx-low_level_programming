#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 48; /*value of 0*/

	while (num <= 102) /*value of f*/
	{
		putchar(num);
		if (num == 57)
		{
			num += 39;
		}
		++num;
	}

	putchar('\n');

	return (0);
}
