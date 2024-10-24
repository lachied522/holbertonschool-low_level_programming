#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers less than 4,000,000, followed by new line
 * Return: 0
 */

int main(void)
{
	int n1;
	int n2;
	long int temp;
	long int sum;

	n1 = 1;
	n2 = 2;
	
	while (n2 < 4000000)
	{ 
		if (n2 % 2 == 0)
			sum += n2;
		
		temp = n1 + n2;

		n1 = n2;
		n2 = temp;
	}

	printf("%li\n", sum);

	return (0);
}
