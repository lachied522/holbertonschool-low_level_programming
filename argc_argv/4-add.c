#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int d;
	int sum;

	for (i = 1; i < argc; i++)
	{
		d = atoi(argv[i]);
		if (d < 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += d;
	}

	printf("%d\n", sum);

	return (0);
}
