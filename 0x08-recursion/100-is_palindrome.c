#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - to find palindrome string
 * @s: the pointer to the string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (palindro(s, s + _strlen(s) - 1));
}

/**
 * palindro - is a string really palindrom
 * @s: start of the string
 * @e: end of the string
 *
 * Return: 1 if palindrome and 0 if not
 */
int palindro(char *s, char *e)
{
	if (*s != *e)
	{
		return (0);
	}
	else if (s >= e)
	{
		return (1);
	}
	else
	{
		return (palindro(s + 1, e - 1));
	}
}
/**
 * _strlen - return length of a string
 * @s: the string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}








