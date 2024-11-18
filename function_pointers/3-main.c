#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - selects and executes function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int output;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	output = f(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", output);

	return (0);
}
