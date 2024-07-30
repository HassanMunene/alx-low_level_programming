#include<stdlib.h>
#include<stdio.h>

/**
 * linear_search - do a linear searh throught the array
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
