#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: int
 * Return: 0
 */

int print_times_table(int n)
{
	int row;
	int col;
	int product;

	if (n < 0 || n > 15)
	{
		return (0);
	}

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= n; col++)
		{
			product = row * col;

			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	return (0);
}
