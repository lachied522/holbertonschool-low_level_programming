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
	int isNumber;
	int sum;

	for (i = 1; i < argc; i++)
	{
		isNumber = 1;
		s = argv[i];
		while (*s != '\0')
		{
			if (
				*s != '-' &&
				!('0' <= *s && *s <= '9')
			)
			{
				isNumber = 0;
				break;		
			}
			s++;
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
