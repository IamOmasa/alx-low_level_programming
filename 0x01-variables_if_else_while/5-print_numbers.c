#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
