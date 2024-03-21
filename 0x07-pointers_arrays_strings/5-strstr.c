#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a specified string in  a string
 * @haystack: the string containing the substring
 * @needle: the string to be searched
 *
 * Return: the pointer pointing to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int len;

	len = 0;
	while (*(needle + len) != 0)
	{
		len++;
	}
	while (haystack != 0)
	{
		unsigned int match = 0;

		for (i = 0; i < len; i++)
		{
			if (*(haystack + i) == *(needle + i))
			{
				match++;
			}
		}
		if (match == len)
		{
			return (haystack);
		}
		haystack++;
	}
	return (needle);
}
