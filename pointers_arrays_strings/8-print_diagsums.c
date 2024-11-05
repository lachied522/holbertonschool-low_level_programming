#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sums of two diagonals of square matrix
 * @a: square matrix
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;

	i = 0;
	j = 0;
	sum = 0;

	while (i < size)
	{
		sum += a[i * size + j];
		i++;
		j++;
	}

	printf("%d, ", sum);

	i = size - 1;
	j = 0;
	sum = 0;

	while (i > -1)
	{
		sum += a[i * size + j];
		i--;
		j++;
	}

	printf("%d\n", sum);
}
