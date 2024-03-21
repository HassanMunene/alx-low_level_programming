#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - this will be used to concat two strings and then
 * * store them as one array in a space in heap
 * @s1: the first string
 * * @s2:the second string
 *
 * Return: a pointer to the string.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int index = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}
	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s[index++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		s[index++] = s2[i];
	}
	return (s);

}
