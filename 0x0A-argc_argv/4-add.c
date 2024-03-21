#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive integers and return the result
 * @argc: the number of argument
 * @argv: the argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int null = 0;
	char e[] = "Error";
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("%d\n", null);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("%s\n", e);
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
