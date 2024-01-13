#include "main.h"

/**
 *_isupper()- function to check uppercase
 *
 *@c: input letter
 *
 *Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
