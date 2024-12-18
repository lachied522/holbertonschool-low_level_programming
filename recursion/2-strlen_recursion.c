#include "main.h"

/**
 * _strlen_recursion - returns length of string using recursion
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
