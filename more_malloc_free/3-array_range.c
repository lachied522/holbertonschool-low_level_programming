#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of ints from min to max
 * @min: int
 * @max: int
 * Return: pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int *buffer;
	int i;

	if (min > max)
		return (NULL);

	if (min == max)
	{
		buffer = malloc(sizeof(int));
		buffer[0] = min;
		return (buffer);
	}

	buffer = malloc((max - min + 1) * sizeof(int));

	if (buffer == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		buffer[i - min] = i;

	return (buffer);
}
