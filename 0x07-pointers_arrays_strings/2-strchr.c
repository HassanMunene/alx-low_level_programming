#include "main.h"
#include <stdio.h>

/**
 * _strchr - find a specific character in a string
 * @s: the address of the string
 * @c: the character to be searched
 *
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
