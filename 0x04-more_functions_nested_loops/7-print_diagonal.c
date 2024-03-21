#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - diagonal line
 * @n: number of time '//should be printed
 *
 * Return: ...
 */
void print_diagonal(int n)
{
	if (n > 1)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					putchar(92);
				}
				if (j < i)
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
