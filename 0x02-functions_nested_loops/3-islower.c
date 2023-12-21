#include "main.h"

/**
 *_islower - function to check lowercase characters
 *
 * parameter 'c' - this is an input value
 *
 * Return: Always 0 (success)
 */

int _islower(int c) /* 'c' is an input value*/
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
