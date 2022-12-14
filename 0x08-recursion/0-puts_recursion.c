#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - will be used to output a string
 * @s: pointer to the string
 *
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
