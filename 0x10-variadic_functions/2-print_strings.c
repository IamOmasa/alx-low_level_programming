#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - a function that prints strings
 *
 *@separator: string to be printed between the strings
 *
 *@n: number of strings passed to the function
 *
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(lst, char *);

		if (str == NULL)
		{
			printf("%s", "(nil)");
		} else
		{
			printf("%s", str);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(lst);

	printf("\n");
}
