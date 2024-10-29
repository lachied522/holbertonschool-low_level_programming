#include "main.h"

/**
 * _strcpy - copies string
 * @src: porinter to string to copy
 * @dest: pointer to buffer to copy to
 * Return: buffer containing copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
