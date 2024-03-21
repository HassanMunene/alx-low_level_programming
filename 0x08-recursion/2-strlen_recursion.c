#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length of string using recursion
 * @s: pointer to the first address of string
 *
 * Return: length of string in bytes
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
