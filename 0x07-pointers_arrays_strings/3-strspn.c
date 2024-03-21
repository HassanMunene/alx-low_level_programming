#include "main.h"
#include <stdio.h>

/**
 * _strspn - return the length of a prefix subscript
 * @s: the address for the string
 * @accept: the string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	unsigned int i;

	len = 0;

	while (*(s + len) != 0)
	{
		int flag = 0;

		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*(s + len) == *(accept + i))
			{
				len++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	return (len);
}
