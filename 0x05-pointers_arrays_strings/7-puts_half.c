#include "main.h"
#include <stdio.h>

/**
 * puts_half - will be used to print half of the string
 * @str: the string will be passed here
 *
 * Return: Always 0;
 */
void puts_half(char *str)
{
	int length;
	int n;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
		while (length > n)
		{
			putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length + 1) / 2;
		while (length > n)
		{
			putchar(str[n]);
			n++;
		}
	}
	putchar('\n');
}
