#include"main.h"

/**
 * Description: a function that prints the alphabet, in lowercase
 * , followed by a new line.
 *
*/

void print_alphabet(void)
{
	int ch = 'a'; /*initialize alphabets*/

	while (ch <= 'z')
	{
		_putchar(ch);
	}

	_putchar('\n');
}
