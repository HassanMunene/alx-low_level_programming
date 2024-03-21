#include "main.h"

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
