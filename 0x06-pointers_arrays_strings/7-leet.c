#include "main.h"
#include <stdio.h>

/**
 * leet - doing the leet thing
 * @s: the string to be leeted
 *
 * Return: the leeted string
 */
char *leet(char *s)
{
	char pha[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};

	char integ[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		char c = s[i];

		for (j = 0; j < 5; j++)
		{
			if (c == pha[j][0] || c == pha[j][1])
			{
				s[i] = integ[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
