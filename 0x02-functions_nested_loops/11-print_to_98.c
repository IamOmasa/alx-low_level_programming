#include "main.h"
#include <stdio.h>
/**
 *print_to_98(int n)-function that prints all natural numbers
 * from n to 98, followed by a new line
 *@n: input paramenter
 *
 *return: valuesto 98
 */

void print_to_98(int n)
{
	int incr;

	if (n > 98)
		for (incr = n; incr > 98; --incr)
			printf("%d, ", incr);
	else
		for (incr = n; incr < 98; ++incr)
			printf("%d, ", incr);
	printf("98\n");
}
