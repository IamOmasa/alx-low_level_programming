#include"main.h"

/**
 * print_alphabet - function with null input
 *
 * Description: a function that prints the alphabet, in lowercase
 * , followed by a new line.
 *
*/

void print_alphabet(void)
{
	int rept = 1;

	while (rept <= 10)
	{
		int ch = 'a';

		while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
		_putchar('\n');
		rept++;
	}
}
