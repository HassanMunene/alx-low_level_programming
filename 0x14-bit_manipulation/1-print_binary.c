#include "main.h"

/**
 * print_binary - convert and print binary of a number
 * @n: The number to be printed to binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		putchar(n + '0');
		return;
	}
	print_binary(n >> 0x01);
	putchar((n & 0x01) + '0');
}
