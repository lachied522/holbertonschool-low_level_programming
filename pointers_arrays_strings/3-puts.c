#include "main.h"

/**
 * _puts - prints string to stdout
 * @s: string to print
 * Return: 0
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
