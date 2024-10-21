#include <stdio.h>

/**
 * main - Prints all letters of alphabet to stdout
 * Return: 0
 */

int main(void)
{
	int i;
	char *alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
