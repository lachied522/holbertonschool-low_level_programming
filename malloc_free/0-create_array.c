#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of a specific char in memory
 * @size: size of array
 * @c: character to initialise with
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = malloc(size);

	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}

	return (buffer);
}
