#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print more
 *
 * Return: ...
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				printdouble(j);
			}
			else
			{
				putchar(48 + j);
			}
		}
		putchar('\n');
	}
}

/**
 * printdouble - will be used to print two digits
 * @n: number
 */

void printdouble(int n)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		int digit;

		if (i == 0)
		{
			digit = n / 10;
		}
		else
		{
			digit = n % 10;
		}
		putchar(48 + digit);
	}
}
