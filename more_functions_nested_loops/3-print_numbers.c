#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by new line
 * Return: 0
 */

int print_numbers()
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');

	return (0);
}
