#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, followed by new line
 * Return: 0
 */

int main(void)
{
	int i;
	long int n1;
	long int n2;
	long int sum;

	n1 = 1;
	n2 = 2;
	i = 2;

	printf("1, 2");

	while (i < 50)
	{
		sum = n1 + n2;
		printf(", ");
		printf("%li", sum);

		n1 = n2;
		n2 = sum;

		i++;
	}

	printf("\n");

	return (0);
}
