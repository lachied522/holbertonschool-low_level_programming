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
	int hasEncounteredNumber;

	i = 0;
	num = 0;
	isNegative = 0;
	hasEncounteredNumber = 0;

	while (s[i] != '\0')
	{
		if ('0' <= s[i] && s[i] <= '9')
		{
			hasEncounteredNumber = 1;
			num *= 10;
			num += s[i] - '0';
		}
		else
		{
			if (hasEncounteredNumber == 1)
			{
				break;
			}
			else if (s[i] == '-')
			{
				isNegative = 1 - isNegative;
			}
			
		}

		i++;
	}

	return (isNegative ? -num : num);
}
