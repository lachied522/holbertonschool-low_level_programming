#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4, followed by new line
 * Return: 0
 */

int print_most_numbers()
{
	int i;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}

	_putchar('\n');

	return (0);
}
