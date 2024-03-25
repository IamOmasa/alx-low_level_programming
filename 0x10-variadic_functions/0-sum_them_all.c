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
	/* name your list */
	va_list added_num;
	unsigned int num, sum = 0;

	/* initialize arg */
	va_start(added_num, n);

	/* Iterate through args */
	for (num = 0; num < n; num++)
	{
		sum += va_arg(added_num, int);
	}

	va_end(added_sum);

	return (sum);
}
