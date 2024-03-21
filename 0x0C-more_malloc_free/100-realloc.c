#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - this function will be used to reallocate a memory block
 * using the malloc function though.
 *
 * @ptr: this is the pointer to the memory we want to koroga
 * @old_size: The size in bytes of the 'old memory'
 * @new_size: The size in bytes of the 'new memory'
 *
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

}
