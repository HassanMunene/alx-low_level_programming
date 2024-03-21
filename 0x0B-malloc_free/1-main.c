#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX students
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;
	s = _strdup("ALX SE"); /* the pointer s contains the address of the newly created dup memory 
				  containing the string*/
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
