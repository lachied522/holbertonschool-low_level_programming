#include "main.h"

/**
 * get_bit - returns bit at index
 * @n: integer
 * @index: index of bit to return
 * Return: bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int selector = 1 << index;
	unsigned long int intersection = n & selector;


	if (index > 64 - 1)
		return (-1);

	return (intersection >> index);
}
