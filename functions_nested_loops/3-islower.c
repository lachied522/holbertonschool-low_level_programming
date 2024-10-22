#include "main.h"

/**
 * _islower - returns true if char c is lower case
 * @c: character to check
 * Return: 1 if char is lower, 0 else
 */

int _islower(char c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}

	return (0);
}
