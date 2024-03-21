#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s; /*this is a pointer which will definately
		   contain the address of the mem in heap
		   that contains the concatenated string*/
	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	} /* what we mean here is if pointer s does not contain any address then return failed
	     because there is nothing more we can do really*/
	printf("%s\n", s);  /*we are just printing the contents of the mem in heap*/
	free(s);
	return (0);
}
