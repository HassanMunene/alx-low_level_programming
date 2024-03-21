#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - This funtion will create a memory containing an array
 * of integers. the size of the array will depend on the number of elements
 * passed to the function
 *
 * @min: The first value that will be stored in the array
 * @max: the last value that will be store in the array
 *
 * Return: a pointer to the memory
 */
int *array_range(int min, int max)
{
	int n;
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		if (min <= max)
		{
			ptr[i] = min;
		}
		min++;
	}
	return (ptr);


}
