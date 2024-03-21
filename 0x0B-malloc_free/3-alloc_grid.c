#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this function work is to allocate a grid
 * * to the 2 dimensional and return a pointer to the adress
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2-d array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			int k = 0;

			for (k = 0; k < i; k++)
			{
				free(*(p + k));
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	return (p);

}
