#include "main.h"

/**
 * _strpbrk - returns first occurence in s of any byte in accept
 * @s: character array
 * @accept: character array to accept
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);

			j++;
		}

		s++;
	}

	return ('\0');
}

