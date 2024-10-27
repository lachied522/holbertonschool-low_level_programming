#include "main.h"

/**
 * _isdigit - returns 1 if char c is a digit, 0 otherwise
 * @c: character to check
 * Return: 1 if char is a digit, 0 else
 */

int _isdigit(char c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}

	return (0);
}
