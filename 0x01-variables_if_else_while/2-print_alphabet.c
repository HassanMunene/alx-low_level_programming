#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description: 'The program's description'
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
