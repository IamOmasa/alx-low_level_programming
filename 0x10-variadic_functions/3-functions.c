#include "variadic_functions.h"

void handle_character(va_list ap)
{
	printf("%c\n", va_arg(ap, int));
}

void handle_intger(va_list ap)
{
	printf("%i\n", va_arg(ap, int));
}

void handle_float(va_list ap)
{
	printf("%f\n", va_arg(ap, double));
}

void handle_string(va_list ap)
{
	printf("%s\n", va_arg(ap, char *));
}
