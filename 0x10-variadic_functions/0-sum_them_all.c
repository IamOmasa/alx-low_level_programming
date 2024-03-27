#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sum all parameters
 *
 *@n: first input variable
 *
 *Return: sum of variables
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;

	/* name your list */
	va_list added_num;

	/* initialize arg */
	va_start(added_num, n);

	/* Iterate through args */
	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(added_num, int);
	}

	va_end(added_num);

	return (sum);
}
