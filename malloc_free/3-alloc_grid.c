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

	if (width == 0 || height == 0)
		return (NULL);

	buffer = malloc(height * sizeof(int *));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));

		if (buffer[i] == NULL)
		{
			free(buffer);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}

	return (buffer);
}
