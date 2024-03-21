#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: the address of the memory to print
 * @size: the size of the memory to print
 *
 * Return: nothing
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");	
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
