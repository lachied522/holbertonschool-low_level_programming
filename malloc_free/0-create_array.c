#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character to initialise with
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return ('\0');

	
	s = malloc(size);

	if (s == '\0')
		return ('\0');

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
