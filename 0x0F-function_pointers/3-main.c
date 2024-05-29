#include "3-calc.h"

int main(int argc, char *argv[])
{
	int arg1, arg2;
	char *operator;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	arg1 = atoi(argv[1]);
	operator = argv[2];
	arg2 = atoi(argv[3]);

	fun_ptr = get_op_func(operator);

	if (fun_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && 
			arg2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", fun_ptr(arg1, arg2));
	return (0);
}
