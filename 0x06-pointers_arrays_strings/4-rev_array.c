#include "main.h"
#include <stdio.h>

/**
 * reverse_array - this will reverse the contents of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		int val1 = a[j];
		int val2 = a[n - 1];

		a[j] = val2;
		a[n - 1] = val1;
		j++;
		n--;
	}
}
