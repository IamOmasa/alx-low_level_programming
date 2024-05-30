#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef struct ops
{
	char format;
	void (*fun)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *format, ...);
void handle_character(va_list);
void handle_intger(va_list);
void handle_float(va_list);
void handle_string(va_list);

#endif /* VARIADIC_FUNCTIONS_H */
