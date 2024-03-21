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
	char ch = 'a';
	char cha = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
