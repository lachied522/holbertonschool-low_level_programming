#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints chessboard
 * a: 8x8 character array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int row;
	unsigned int col;

	row = 0;

	while (row < 8)
	{
		col = 0;

		while (col < 8)
		{
			printf("%c", a[row][col]);

			col++;
		}

		printf("\n");

		row++;
	}
}

