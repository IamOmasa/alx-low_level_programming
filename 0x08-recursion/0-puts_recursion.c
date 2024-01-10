#include "main.h"

/**
 *_puts_recursion - function that prints a string, followed by a new line.
 *
 *@s: string input
 *
 *Return: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	} else
		_puchar('\n');
}
