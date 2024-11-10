#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strdup - creates a duplicate of a string
 * @str: character to initialise with
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *buffer;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	buffer = malloc(strlen(str));

	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < strlen(str))
	{
		buffer[i] = str[i];
		i++;
	}

	return (buffer);
}
