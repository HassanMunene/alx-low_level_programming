#include "main.h"
#include <stdio.h>

/**
 * _strcmp - This will compare two strings character
 * by character and return a value
 * @s1: The first string
 * @s2: The second string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		n = s1[i] - s2[i];
		if (n != 0)
		{
			break;
		}
		i++;
	}
	return (n);
}
