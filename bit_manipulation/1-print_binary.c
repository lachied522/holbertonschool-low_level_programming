#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of int
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	int shouldPrint = 0;
	unsigned int k;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			printf("1");
			shouldPrint = 1;
		}
		else if (shouldPrint == 1)
			printf("0");
	}
}
