#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - will allocate memory using malloc
 *    it will return a pointer to the allocated memory
 *    if it fails to  create memory, normal process termination
 *    *    should occur with a status value of 98
 *
 * @b: this is the size of the mem in bytes
 *
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
