#include "main.h"

/**
 * _strncpy - copies n bytes from src string to dest string
 * @src: pointer to src string
 * @dest: pointer to destination string
 * @n: integer, number of bytes from src to copy
 * Return: buffer containing concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
