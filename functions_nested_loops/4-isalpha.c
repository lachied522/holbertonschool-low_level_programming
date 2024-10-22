#include "main.h"

/**
 * _isalpha - returns true if char c is a letter
 * @c: character to check
 * Return: 1 if char is letter, 0 else
 */

int _isalpha(char c)
{
	if ('A' <= c && c <= 'z')
	{
		return (1);
	}

	return (0);
}
