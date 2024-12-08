#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from n to m
 * @n: integer
 * @m: integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned int i = 0;

	for (i = 0; i < 64 - 1; i++)
		sum += (n ^ m) & (1 << i);

	return (sum);
}
