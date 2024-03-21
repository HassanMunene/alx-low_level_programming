#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return the value of x raised to y
 * @x: the base number
 * @y: the power
 *
 * Return: the square
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
