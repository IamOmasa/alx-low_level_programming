#include "main.h"

/**
 *print_line()- function that draws a straight line in the terminal
 *
 *@n: input value
 *
 *Return: line
 */

void print_line(int n)
{
	int i, n;

	for (i = 1; i <=  n; i++)
	{
		if (n <= 0)
			_putchar("\n");
		else
			_putchar(95);
	}
	_putchar("\n");
}
