#include "variadic_functions.h"

/**
 *print_all - a function that prints anything.
 *
 *@format: a list of types of arguments passed to the functio
 *
 *Return: nothing
 */

void print_all(const char *format, ...)
{
	int i = 0, j, found;
	va_list ap;
	op_t handlers[] = {
		{'c', handle_character},
		{'i', handle_intger},
		{'f', handle_float},
		{'s', handle_string},
	};

	va_start(ap, format);

	while (format[i] != '\0')
	{
		/* format = 'ceis' */
		j = 0;
		found = 0;
		while (j < 4)
		{
			if (handlers[j].format == format[i])
			{
				handlers[j].fun(ap);
				found = 1;
				break;
			}
			++j;
		}
		if (format[i + 1] == '\0')
			printf("\n");
		else if (found == 1)
			printf(", ");
		++i;
	}
}
