#include "main.h"

/**
 * print_diagonal - prints diagonal line of n '\', followed by new line
 * @n: length of line
 * Return: 0
 */

int print_diagonal(int n)
{
	int i;
	int j;

	i = 0;

	if (n < 1)
	{
		_putchar('\n');
		return (0);
	}

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}

	return (0);
}
