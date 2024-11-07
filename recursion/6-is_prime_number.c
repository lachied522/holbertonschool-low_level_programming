#include "main.h"

int is_prime_step(int n, int test);

/**
 * is_prime_step - step of subtraction method
 * @n: number
 * @test: factor to test
 * Return: 1 if n is divisible by test
 */
int is_prime_step(int n, int test)
{
	if (test > n / 2)
		return (1);

	if (n % test == 0)
		return (0);

	return (is_prime_step(n, test + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n % 2 == 0)
		return (0);

	return (is_prime_step(n, 3));
}
