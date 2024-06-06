#include "main.h"
/**
 *_atoi - a function that convert a string to an integer
 *
 * @s: pointer to string
 *
 * Return: integer or 0
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = 1;
			num = (num * 10) + (*s - '0');
		}
		else if (digit)
			break;
		++s;
	}

	return (num * sign);
}
