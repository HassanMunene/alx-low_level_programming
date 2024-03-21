#include <stdio.h>
#include "main.h"

/**
 * _memcpy - used to copy n bytes from src to dest
 * @dest: destination
 * @src: source of data
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
