#include <stdio.h>

/**
 * main - Prints all digits from 0 to 9 to stdout
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
