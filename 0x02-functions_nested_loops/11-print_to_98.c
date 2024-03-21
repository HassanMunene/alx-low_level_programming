#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this will be used to print any number to 98
 * @n: this value will be passed
 *
 * Return: ...
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 98)
		{
			printf("%d", n);
			modulation(n);
			n++;
		}
		printf("\n");
	}
	else if (n >= 0 && n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			modulation(n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			modulation(n);
			n--;
		}
		printf("\n");
	}
}

/**
 * modulation - shorten the program
 * @n: the value passed
 *
 * Return: Always 0
 */
int modulation(int n)
{
	if (n < 98)
	{
		printf(",");
		printf(" ");
	}
	if (n > 98)
	{
		printf(",");
		printf(" ");
	}
	return (0);
}
