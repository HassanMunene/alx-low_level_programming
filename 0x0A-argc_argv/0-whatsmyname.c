#include <stdio.h>
#include <stdlib.h>

/**
 * main - to give us the name of the program
 * @argc: the number of the argument passed in the cli
 * @argv: the pointer to the string passed
 *
 * Return: Always 0
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
