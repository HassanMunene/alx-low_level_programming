#include "main.h"
#include <stdio.h>

/**
 * _strcat - to concatenate src string to dest string
 * @dest: this is the destination
 * @src: this is the string to be concetenated
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
