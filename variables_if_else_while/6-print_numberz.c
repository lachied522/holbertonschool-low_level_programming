#include <stdio.h>

/**
 * main - Prints all digits from 0 to 9 to stdout without 'char'
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
