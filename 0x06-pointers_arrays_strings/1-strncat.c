#include "main.h"
#include <stdio.h>

/**
 * _strncat - will be used to cocatenate n characters to the destination
 * @dest: the destination
 * @src: the source string
 * @n: the number of characters or bytes to be concatenated
 *
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i + j] = src[j];
		}
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
