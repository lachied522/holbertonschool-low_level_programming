#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string
 * Return: length of sting
 */
int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

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

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (size2 > n)
		size2 = n;

	buffer = malloc(size1 + size2 + 1);
	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < size1)
	{
		buffer[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2 + 1)
	{
		if (i == n)
		{
			buffer[size1 + i] = '\0';
			break;
		}

		buffer[size1 + i] = s2[i];
		i++;
	}

	return (buffer);
}
