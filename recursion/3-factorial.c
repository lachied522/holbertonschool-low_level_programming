#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: int
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}
