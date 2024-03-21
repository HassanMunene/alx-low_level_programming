#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: this is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j > size - 2 - i)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
