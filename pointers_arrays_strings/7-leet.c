#include "main.h"

/**
 * leet - translate string to leet (1337)
 * @s: string to translate
 * Return: the translated string
 */

char *leet(char *s)
{
	char map[256];
	int i;
	int c;

	map['a'] = '4';
	map['A'] = '4';
	map['e'] = '3';
	map['E'] = '3';
	map['o'] = '0';
	map['O'] = '0';
	map['t'] = '7';
	map['T'] = '7';
	map['l'] = '1';
	map['L'] = '1';

	i = 0;

	while (s[i] != '\0')
	{
		c = s[i] - '\0';
		if (map[c] != '\0')
		{
			s[i] = map[c];
		}

		i++;
	}

	return (s);
}
