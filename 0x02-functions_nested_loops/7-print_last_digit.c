#include "main.h"

/**
 *print_last_digit()- function to print last digit of a number
 *
 *@n: input value
 *
 *Return: number, last
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)

		last = (-1) * (n % 10);
	else
		last = n % 10;

	_putchar(last);
	return (last);
}
