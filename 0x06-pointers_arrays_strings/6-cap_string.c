#include "main.h"
#include <stdio.h>

/**
 * cap_string - will be used to capitalize every word on a string
 * @s: the string to be passed
 *
 * Return: The capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int size;


	char sep[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	size = sizeof(sep) / sizeof(sep[0]);
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		char ch = s[i];

		for (j = 0; j < size; j++)
		{
			if (ch == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
	}
	return (s);
	putchar('\n');
}
