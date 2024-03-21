#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search  a set of bytes from a string
 * @s: The address for the string
 * @accept: the set of bytes
 *
 * Return: pointer to the set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
