#include "main.h"

/**
 * rev_string - reverses string in place
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int left;
	int right;
	char temp;

	left = 0;
	right = 0;

	while (s[right] != '\0')
	{
		right++;
	}

	right--;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
