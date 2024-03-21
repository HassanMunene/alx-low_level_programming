#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - this function takes a string and prints it in reverse
 * @s: will be used to store the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;
	char temp;
	int left;
	int right;

	length = strlen(s);
	left = 0;
	right = length - 1;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
	printf("%s\n", s);
}
