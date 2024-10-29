#include "main.h"

/**
 * _strlen - returns length of character array
 * @s: character array
 * Returns: nothing
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return count;
}

