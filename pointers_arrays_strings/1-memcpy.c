#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: pointer to memory area
 * @src: pointer to memory area
 * @n: number of memory bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

