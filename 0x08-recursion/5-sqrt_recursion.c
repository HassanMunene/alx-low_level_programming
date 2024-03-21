#include <stdio.h>
#include "main.h"

/**
 * square - find square of root number
 * @a: number
 * @b: root
 *
 * Return: natural squareroot
 */
int square(int a, int b)
{
	int sqr = b * b;

	if (sqr == a)
	{
		return (b);
	}
	else if (sqr > a)
	{
		return (-1);
	}
	return (square(a, b + 1));
}

/**
 * _sqrt_recursion - natural squareroot of number
 * @n: number
 *
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
