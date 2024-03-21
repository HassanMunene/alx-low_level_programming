#include "main.h"
#include<stdio.h>
/**
 * print_last_digit - printint the last digit in numerals
 * @a: where to pass the damn digits`:wq
 *
 * Return: Always an integer
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
