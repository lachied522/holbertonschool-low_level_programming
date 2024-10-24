#include <stdio.h> 

/**
 * main - prints the sum of all multiples of 3 & 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
		i++;	
	}

	printf("%d\n", sum);

	return (0);
}
