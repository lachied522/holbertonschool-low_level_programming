#include "main.h"

/**
 * reverse_array - reverse array in place
 * @a: array to reverse
 * @n: size of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int left;
	int right;
	int temp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
	
		left++;
		right--;
	}
}
