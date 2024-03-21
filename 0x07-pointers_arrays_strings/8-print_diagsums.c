#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * @a: array
 * * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		int i1 = i + size * i;
		int i2 = size * (i + 1) - (i + 1);

		sum1 = sum1 + a[i1];
		sum2 = sum2 + a[i2];
	}

	printf("%d, %d\n", sum1, sum2);
}
