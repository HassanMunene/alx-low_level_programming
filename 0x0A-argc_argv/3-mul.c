#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply the arguments passed in CLI
 * and return the results
 * @argc: The number of arguments
 * @argv: the argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;
	char e[] = "Error";

	if (argc == 1)
	{
		printf("%s\n", e);
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
