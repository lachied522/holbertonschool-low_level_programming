#include "main.h"

/**
 * swap_int - swaps values of a & b
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int tempA;
	int tempB;

	tempA = *a;
	tempB = *b;

	*a = tempB;
	*b = tempA;
}

