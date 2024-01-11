#include "main.h"
/**
 *_pow_recursion - function return the value of x raised to the power of y
 *
 *@x: input
 *@y: power
 *
 *Return: value of @x power @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
