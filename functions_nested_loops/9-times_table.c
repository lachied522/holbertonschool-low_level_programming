#include "main.h"

/**
 * times_table - prints every minute of the day from 00:00 to 23:59
 * Return: 0
 */

int times_table(void)
{
	int row;
	int col;
	int product;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col < 10; col++)
		{
			product = row * col;
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	return (0);
}
