#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Declaration: 'The program's description'
 * Return: Always 0 (success)
 */

int main(void)
{
	int cha = '0';
	char ch = 'a';

	while (cha <= '9')
	{
		putchar(cha);
		cha++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
