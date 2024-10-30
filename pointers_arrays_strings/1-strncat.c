#include "main.h"

/**
 * _strncat - contatenates n bytes from  src string to dest string
 * @src: pointer to src string
 * @dest: pointer to destination string
 * @n: integer, number of bytes from src to concatenate
 * Return: buffer containing concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int byteCount;

	i = 0;
	j = 0;
	byteCount = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (byteCount < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		byteCount++;
	}

	dest[i + j] = '\0';

	return (dest);
}
