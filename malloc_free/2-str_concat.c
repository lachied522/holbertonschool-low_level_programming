#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings in memory
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i;
	unsigned int size1;
	unsigned int size2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}

	size2 = 0;
	i = 0;

	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}

	buffer = malloc(size1 + size2 + 1);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		buffer[i] = s1[i];
	}

	for (i = 0; i < size2 + 1; i++)
	{
		buffer[size1 + i] = s2[i];
	}

	return (buffer);
}
