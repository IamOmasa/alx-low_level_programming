#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum all parameters
 *
 *@n: first input variable
 *
 *Return: sum of variables
 */

int sum_them_all(const unsigned int n, ...)
{
	/* name your list */
	va_list added_num;
	unsigned int i, sum = 0;

	/* initialize arg */
	va_start(added_num, n);

	if (n == 0)
		return (0);

	/* Iterate through args */
	for (i = 0; i < n; i++)
	{
		int num = va_arg(added_num, int)
		sum += num
	}

	va_end();

	return sum;
}
