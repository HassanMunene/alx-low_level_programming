#include "main.h"
#include <stdio.h>

/**
 * string_toupper - will be used to covert lowercase
 * characters to uppercase
 * @s: the character will be passed here
 *
 * Return: the uppercase character
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
