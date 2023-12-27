#include "main.h"

/**
 *main - fizzBuzz function
 *
 *Return: 1 to 100 with fizzBuzz conditions
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
