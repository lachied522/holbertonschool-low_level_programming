#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal
 * 	  >0 if first non-matching char in s1 has higher ASCII value
 * 	  <0 if first non-matching char in s2 has higher ASCII value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
