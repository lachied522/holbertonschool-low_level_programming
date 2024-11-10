#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate of a string
 * @str: character to initialise with
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *buffer;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	i = 0;
	size = 0;

	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	buffer = malloc(size + 1);

	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < size + 1)
	{
		buffer[i] = str[i];
		i++;
	}

	return (buffer);
}
