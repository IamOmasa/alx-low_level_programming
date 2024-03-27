#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 *
 *@separator: the string to be printed between numbers
 *
 * @n:the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(lst);
	printf("\n");
}
