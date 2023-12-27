#include "main.h"

/**
 *print_numbers()- a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 *Return: 0 to 9
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + 48);
		num++;
	}

	_putchar('\n');
}
