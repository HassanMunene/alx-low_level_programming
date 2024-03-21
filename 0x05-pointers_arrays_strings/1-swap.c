#include "main.h"
#include <stdio.h>

/**
 * swap_int - we will swap the value of two integers
 * @a: one of the integer
 * @b: another integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
