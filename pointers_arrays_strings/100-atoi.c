#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	unsigned int num;
	int isNegative;

	i = 0;
	num = 0;
	isNegative = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			isNegative = 1 - isNegative;
		}
		else if ('0' <= s[i] && s[i] <= '9')
		{
			num *= 10;
			num += s[i] - '0';
		}
		else if (s[i] == ';')
		{
			break;
		}

		i++;
	}

	return (isNegative ? -num : num);
}
