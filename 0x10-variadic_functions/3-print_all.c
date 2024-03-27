#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - a function that prints anything.
 *
 *@format: a list of types of arguments passed to the functio
 *
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int i = 0;

	int printed = 0;

	while (format[i] && i < 40)
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			printed = 1;
		} else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			printed = 1;
		} else if (format[i] == 'f')
		{
			printf("%f", (float) va_arg(args, double));
			printed = 1;
		} else if (format[i] == 's')
		{
			char *str_arg = va_arg(args, char *);

			if (str_arg == NULL)
			{
				printf("(nil)");
			} else
			{
				printf("%s", str_arg);
			}
			printed = 1;
		}

		if (format[i + 1] && printed)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
