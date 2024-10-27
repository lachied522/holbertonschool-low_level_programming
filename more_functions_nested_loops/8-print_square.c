#include "main.h"

/**
 * print_square - prints n x n square, followed by new line
 * @size: side length
 * Return: 0
 */

int print_square(int size)
{
	int i;
	int j;

	i = 0;

	if (size < 1)
	{
		_putchar('\n');
		return (0);
	}

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}

	return (0);
}
