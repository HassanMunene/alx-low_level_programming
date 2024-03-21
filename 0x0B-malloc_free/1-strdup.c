#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Returns a pointer to a new memory
 * containing the copy of the string given as parameter
 *
 * @str: The address of the passed string
 *
 * Return: pointer to the address of new memory
 */
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	len = strlen(str);
	s = malloc(sizeof(char) * len);
	if (!s)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);

}
