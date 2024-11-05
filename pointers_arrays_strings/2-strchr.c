#include "main.h"

/**
 * _strchr - returns pointer to first occurence of c in char array
 * @s: character array
 * @c: character to look for
 * Returns: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}

