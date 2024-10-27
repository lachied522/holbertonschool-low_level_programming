#include "main.h"

/**
 * print_triangle - prints triangle of size n, followed by new line
 * @size: size of triangle
 * Return: 0
 */

int print_triangle(int size)
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
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			j++;
		}

		_putchar('\n');
		i++;
	}

	return (0);
}
