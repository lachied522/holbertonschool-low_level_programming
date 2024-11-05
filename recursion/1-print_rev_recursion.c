#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse with recursion
 * @s: string to print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	char temp;

	temp = *s;

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(temp);
}
