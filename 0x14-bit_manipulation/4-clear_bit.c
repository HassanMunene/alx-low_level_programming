#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: pointer tot the index
 * @index: given index
 *
 * Return: the given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int copy;

	if (index > 64)
	{
		return (-1);
	}
	copy = *n;
	copy = get_bit(copy, index);

	if (copy == 0x0)
	{
		return (1);

	}
	*n = (*n) - power(2, index);
	return (1);
}
/**
 * power - return the power of two numbers
 * @a: the first int
 * @b: the second
 *
 * Return: unsigned int
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int num;

	if (b == 0)
	{
		return (1);
	}
	for (i = 1; i <= b; i++)
	{
		num = num * a;
	}
	return (num);
}
/**
 * get_bit - get value of bit at a certain index
 * @n: value
 * @index: the given index
 *
 * Return: index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
	{
		return (-1);
	}
	for (c = 0; c < index; c++)
	{
		n >>= 0x01;
	}
	return (n & 0x01);
}
