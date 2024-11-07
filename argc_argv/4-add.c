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
	unsigned int i;
	unsigned int j;
	int isNumber;
	int sum;

	for (i = 1; i < argc; i++)
	{
		isNumber = 1;
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (
				argv[i][j] != '-' &&
				!('0' <= argv[i][j] && argv[i][j] <= '9')
			)
			{
				isNumber = 0;
				break;		
			}
		}
		if (isNumber == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
