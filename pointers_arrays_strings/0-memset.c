#include "main.h"

/**
 * _memset - fills first n bytes of memory with byte b
 * @s: pointer to memory area
 * @b: byte to populate memory with
 * @n: number of memory bytes to fill
 * Returns: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

