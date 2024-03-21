#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * print_name - the work of this function is to basically print a name
 * @name: the name to be printed
 * @f: the pointer to the function that will print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;
	unsigned int len;

	if (!f)
	{
		return;
	}
	len = strlen(name);
	for (i = 0; i < len; i++)
	{
		if (i > 0 && i < len)
		{
			return;
		}
		f(&name[i]);
	}
	printf("\n");
}
