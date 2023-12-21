#include "main.h"

/**
 * print_sign()-function to print sign of number
 *
 * @n: input value of a function
 *
 *Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
		_putchar(45);
		return (-1);
}
