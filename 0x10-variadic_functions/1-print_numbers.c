#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the number passed
 * @separator: the string to separate the numbers
 * @n: the number of arguments that the function will have
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i == n - 1)
		{
			break;
		}
		if (separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
