#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- concatenates n bytes of s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int i;
	unsigned int size1;
	unsigned int size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i, size1 = 0, 0;
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}

	i, size2 = 0;
	while (s2[i] != '\0' && i < n)
	{
		size2++;
		i++;
	}
	buffer = malloc(size1 + size2 + 1);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		buffer[i] = s1[i];
	for (i = 0; i < size2 + 1; i++)
		buffer[size1 + i] = s2[i];
	return (buffer);
}
