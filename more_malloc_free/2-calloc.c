#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array members
 * @size: size of individual members
 * Return: pointer to memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		buffer[i] = 0;

	return (buffer);
}
