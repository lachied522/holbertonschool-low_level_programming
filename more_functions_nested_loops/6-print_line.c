#include "main.h"

/**
 * print_line - prints '_' n times, followed by new line
 * @n int, length of line
 * Return: 0
 */

int print_line(int n)
{
	if (n < 1)
	{
		_putchar('\n');
		return (0);
	}

	int i;

	i = 0;

	while (i < n + 1)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');

	return (0);
}
