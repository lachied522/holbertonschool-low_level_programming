#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether last digit of random int n is greater than 5
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int mod_10 = n % 10;

	if (mod_10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, mod_10);
	} else if (mod_10 == 0)
	{
		printf("Last digit of %i is %i and is 0", n, mod_10);
	} else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, mod_10);
	}

	return (0);
}
