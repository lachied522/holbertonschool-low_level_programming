#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 followed by new line 10 times
 * Return: 0
 */

int more_numbers()
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar('1');
			}

			_putchar(j % 10 + '0');
			j++;
		}

		_putchar('\n');

		i++;
	}

	return (0);
}
