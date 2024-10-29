#include <stdio.h>
#include "main.h"

/**
 * print_array - prints first n elements of array
 * @a: integer array
 * @n: num elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}

	printf("%d\n", a[n]);
}
