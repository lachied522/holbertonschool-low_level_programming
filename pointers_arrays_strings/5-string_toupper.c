#include "main.h"

/**
 * string_toupper - convert all letters to uppercase
 * @s: string to convert
 * Return: the converted string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';

		i++;
	}

	return (s);
}
