#include "main.h"

/**
 * puts_half - print second half of string
 * @s: string to print
 * Return: nothing
 */

void puts_half(char *s)
{
	int length;
	int i;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	i = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	while (i < length)
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
