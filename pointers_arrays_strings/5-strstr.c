#include "main.h"

/**
 * _strstr - returns first occurence of substring in string
 * @haystack: character array to search
 * @needle: character array to find
 * Return: pointer to beginning of first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	int match;

	while (*haystack != '\0')
	{
		j = 0;
		match = 1;

		while (needle[j] != '\0')
		{
			if (haystack[j] != needle[j])
			{
				match = 0;
				break;
			}

			j++;
		}

		if (match == 1)
			break;

		haystack++;
	}

	return (haystack);
}

