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
	int *buffer;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	ptr = buffer;
	while (*ptr)
	{
		*ptr = 0;
		ptr++;
	}

	return (buffer);
}
