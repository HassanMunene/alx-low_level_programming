#include "main.h"

/**
 * flip_bits - flipping
 * @n: the int
 * @m: the other
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
		{
			count++;
		}
	}
	return (count);
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
