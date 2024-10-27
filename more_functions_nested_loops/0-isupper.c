#include "main.h"

/**
 * _isupper - returns 1 if char c is uppper case, 0 otherwise
 * @c: character to check
 * Return: 1 if char is upper, 0 else
 */

int _isupper(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
