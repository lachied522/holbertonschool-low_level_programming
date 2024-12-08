#include "main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: integer
 * @index: index of bit to return
 * Return: bit at index or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int selector = 1 << index;

	if (index > 64 - 1)
		return (-1);

	*n = *n | selector;
	return (1);
}
