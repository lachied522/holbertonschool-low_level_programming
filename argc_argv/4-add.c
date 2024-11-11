#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	char *s;
	int sum;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		while (*s != '\0')
		{
			if (!('0' <= *s && *s <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
