#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: integer
 * @index: index of bit to return
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int selector = 1 << index;

	if (index > 64 - 1)
		return (-1);

	*n = *n & ~selector;
	return (1);
}
