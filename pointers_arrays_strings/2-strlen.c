#include "main.h"

/**
 * _strlen - returns length of character array
 * @s: character array
 * Return: length of character array
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
