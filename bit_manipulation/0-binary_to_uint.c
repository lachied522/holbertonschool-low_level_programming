#include "main.h"

/**
 * _pow - raise base to power exp
 * @base: int
 * @exp: int
 * Return: int
 */
int _pow(int base, int exp)
{
	int result = 1;

	while (exp)
	{
		result = result * base;
		exp--;
	}

	return (result);
}

/**
 * binary_to_uint - converts binary number to int
 * @b: binary number to be converted
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;
	unsigned int len = 0;

	while (b[len] != '\0')
		len++;

	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		if (b[i] == '1')
			num += _pow(2, len - i - 1);
		i++;
	}

	return (num);
}
