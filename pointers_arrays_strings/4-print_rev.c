#include "main.h"

/**
 * print_rev - prints string to stdout in reverse
 * @s: string to print
 * Return: 0
 */

void print_rev(char *s)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		p++;
	}

	while (p != s)
	{
		_putchar(*p);
		p--;
	}
	
	_putchar(*s);
	_putchar('\n');
}
