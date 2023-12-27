#include "main.h"
#include <stdio.h>

/**
 *main - fizzBuzz function
 *
 *Return: 1 to 100 with fizzBuzz conditions
 */

void main(void)
{
	int num, i;

	for (i = 1; 1 <= 100; ++i)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
	}
	printf('\n');

	return (0);
}
