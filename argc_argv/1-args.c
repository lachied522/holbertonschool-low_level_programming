#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
