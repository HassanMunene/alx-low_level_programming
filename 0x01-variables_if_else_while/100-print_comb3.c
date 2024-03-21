#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Declaration: 'The program's description'
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
