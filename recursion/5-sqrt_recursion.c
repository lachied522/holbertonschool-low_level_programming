#include "main.h"

int sqrt_step(int sum, int iter);

/**
 * sqrt_step - step of subtraction method
 * @sum: running sum
 * @iter: current iteration
 * Return: number of iterations or -1
 */
int sqrt_step(int sum, int iter)
{
	int _sum;

	_sum = sum - (2 * iter + 1);

	if (sum == 0)
		return (iter);

	if (_sum < 0)
		return (-1);

	return (sqrt_step(_sum, iter + 1));
}

/**
 * _sqrt_recursion  - returns natural square root of n
 * @n: number to get square root of
 * Return: natural square root of n, or -1 if doesn't exist
 */
int _sqrt_recursion(int n)
{
	return (sqrt_step(n, 0));
}
