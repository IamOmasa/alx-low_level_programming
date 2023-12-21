#include "main.h"

/**
 *main - Entry point
 *
 *Description: print _putchar followed by new line
 *
 * Return: Always 0 (succcess)
 */

int main(void)
{
	char str[] = "_putchar"; /*_putchar array*/
	int ch; /*array length*/

	for (ch = 0; str[ch] != '\0'; ch++)
		_putchar(str[ch]);

	_putchar('\n');

	return (0);
}
