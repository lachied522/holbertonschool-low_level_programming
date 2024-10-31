#include "main.h"

/**
 * cap_string - capitalise all words of string
 * @s: string to capitalise
 * Return: the capitalised string
 */

char *cap_string(char *s)
{
	int i;
	int isWord;

	i = 0;
	isWord = 0;

	while (s[i] != '\0')
	{
		if (('A' <= s[i] && s[i] <= 'Z') || ('0' <= s[i] && s[i] <= '9'))
		{
			isWord = 1;
		}
		else if ('a' <= s[i] && s[i] <= 'z')
		{
			if (isWord == 0)
				s[i] = s[i] - 'a' + 'A';

			isWord = 1;
		}
		else if (s[i] != '-')
		{
			isWord = 0;
		}

		i++;
	}

	return (s);
}
