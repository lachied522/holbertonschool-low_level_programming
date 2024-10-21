#include <stdio.h>

/**
 * main - Prints all unique combinations of digits from 0 to 9 to stdout without 'char'
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
