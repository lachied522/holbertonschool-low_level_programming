#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - apply function to each item in array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
