#include "main.h"
/**
 *puts_half - a function that prints half of a string, followed by a new line
 *
 * @str: pointer to string input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, i;
	int string_length = 0;

	/* find length of the string*/
	for (i = 0; str[i] != '\0'; i++)
		++string_length;

	/*check if its odd or even*/
	if (string_length % 2 != 0)
	{
		n = (string_length - 1) / 2;
	}
	else
		n = string_length / 2;

	/*return second half of the string*/
	for (i = n; i < string_length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
