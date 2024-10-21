#include <stdio.h>

/**
 * main - Prints all letters of alphabet to stdout
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch='a'; ch<='z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
