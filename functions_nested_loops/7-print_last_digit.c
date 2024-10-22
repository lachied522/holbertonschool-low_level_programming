#include "main.h"

/**
 * print_last_digit  - prints last digit of int n
 * @n: int
 * Return: last digit of int n
 */

int print_last_digit(int n)
{
	int mod10;

	mod10 = n % 10;

	if (mod10 < 0)
	{
		mod10 = -mod10;
	}

	_putchar(mod10 + '0');

	return (mod10);
}
