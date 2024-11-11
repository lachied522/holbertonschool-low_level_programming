#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to start of grid or NULL
 */

int **alloc_grid(int width, int height)
{
	int **buffer;
	int i;
	int j;

	buffer = malloc(height * sizeof(int *));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}

	return (buffer);
}
