#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - this will be used to find the length of a string
 * @s: string to be passed
 *
 * Return: Always an integer
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	return c;
}
