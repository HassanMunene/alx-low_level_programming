#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - this function will copy a string from src to destination
 * including the null terminator too without using strcpy()
 * @dest: pointer to the destination
 * * @src: pointer to the string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	ptr = dest;
	return (ptr);
}
