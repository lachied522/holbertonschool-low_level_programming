#include "main.h"

/**
 * print_sign - prints '+' if n is positive, '-' if negative, '0' otherwise
 * @n: int to check
 * Return: 1 if n is positive, -1 if negative, 0 else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');

	return (0);
}
