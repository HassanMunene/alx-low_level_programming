#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of the space in bytes
 *
 * Return: pointer to the memory created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	/**
	 * this will store the base address of the space
	 */
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <nmemb *size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
