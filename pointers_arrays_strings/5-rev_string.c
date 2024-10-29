#include "main.h"

/**
 * rev_string - reverses string in place
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	char *first;
	char *last;
	char temp;

	first = s;
	last = s;

	while (*last != '\0')
	{
		last++;
	}

	last--;

	while (first != last)
	{
		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}
}
