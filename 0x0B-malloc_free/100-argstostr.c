#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * * argstostr - this will essentially receive the number of arguments
 * * store the arguments in a space created by malloc and return the arguments
 * * as a pointer to be printed out
 *
 * @ac: this will hold the number of arguments entered during runtime
 * @av: this is the array of the arguments entered
 *
 * Return: The pointer to the space holding the concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	/**
	 * when returned it will return the address of the space created
	 * by malloc
	 */
	int len = ac;
	int i;
	int j;
	int index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	arg = malloc(sizeof(char) * len + 1);
	if (arg == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[index++] = av[i][j];
		}
		arg[index++] = '\n';
	}
	return (arg);






}
