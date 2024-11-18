#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer in array
 * @array: array to search through
 * @size: size of array
 * @cmp: function that returns 0 for desired integer
 * Return: index of first occurence of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
