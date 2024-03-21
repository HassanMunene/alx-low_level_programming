#include <stdio.h>
#include <stdlib.h>

/**
 * main - will be used to print all args passed in CLI
 * @argc: the number of args written
 * @argv: the arg itself
 *
 * Return: Always 0;
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
