#include "main.h"

/**
 * _islower - returns true if char c is lower case
 */

int _islower(char c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}

	return (0);
}
