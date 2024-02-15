#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that print number of argument
 * @argc: number of argument
 * @argv: array pointer that holds the argument passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)), char *argv[])
{
	int i = 0, m;
	while(i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);

	return (0);

}
