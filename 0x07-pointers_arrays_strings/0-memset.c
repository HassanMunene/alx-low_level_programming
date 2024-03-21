#include "main.h"
#include <stdio.h>

/**
 * _memset: fill the memory
 * @b: the constant value to be passed
 * @s: the address of the memory area
 * @n: the number of bytes of the memory
 *
 * Return: The area pointed by s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
