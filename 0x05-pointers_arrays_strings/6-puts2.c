#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - used to find every other character
 * @str: the string to be passed here
 *
 * Return : void
 */

void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
