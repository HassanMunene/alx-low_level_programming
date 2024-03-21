#include "main.h"
#include <stdio.h>

/**
 * print_square - will print square
 * @size: the size of the square
 *
 * Return: ...
 */
void print_square(int size)
{
	if (size > 1)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
