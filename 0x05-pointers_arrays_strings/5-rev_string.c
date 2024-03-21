#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - it will be used to reverse astring
 * @s: the string to be reversed is passed here
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;
	char temp;
	int length2;

	length2 = strlen(s) / 2;
	length = strlen(s) - 1;
	for (i = 0; i < length2; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length--] = temp;
	}
}
