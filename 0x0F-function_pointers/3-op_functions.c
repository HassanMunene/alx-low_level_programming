#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - will be used to return the sum of a + b
 *
 * @a: integer 1
 * @b: integer 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return a - b
 * @a: integer 1
 * @b: integer 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return a * b
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return a / b
 * @a: integer 1
 * @b: integer 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return rem of a / b
 * @a: integer 1
 * @b: integer 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
