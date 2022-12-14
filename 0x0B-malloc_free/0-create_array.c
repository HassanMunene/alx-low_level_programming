#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * * create_array - creates an array of chars, initializes it with
 * * a specific character and returns the adress of the first
 * element of the array.
 *
 *
 * @size: This will be the size of the array
 * @c: the character to be initialized int the array
 *
 * Return: pointer to the address of the character array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (!size)
	{
		return (NULL);
	}
	ch = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);

}

