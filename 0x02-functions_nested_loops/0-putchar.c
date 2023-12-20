#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Description: print _putchar followed by new line
 *
 * Return: Always 0 (succcess)
 */
void _putchar(const char *str)
{
/**
 *_putchar - function that print an input value
 *
 */
	printf("%s\n", str);
}

int main(void)
{
	const char *txt = "_putchar";

	_putchar(txt);

	return (0);
}
