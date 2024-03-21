#include <stdio.h>
#include "main.h"

/**
 * factorial - will be used to calculate the factorial of natural numbers
 * @n:The number
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
