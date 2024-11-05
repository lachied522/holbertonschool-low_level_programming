#include "main.h"

/**
 * _strspn - returns number of bytes in s that are also in accept
 * @s: character array
 * @accept: character array to accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int match;

	i = 0;

	while (s[i] != '\0')
	{
		match = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
			j++;
		}

		if (match == 0)
			break;

		i++;
	}

	return (i);
}

