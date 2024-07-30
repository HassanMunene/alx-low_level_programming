#include <stdio.h>
#include <stdlib.h>

/**
 * print_subarray - print an array being search at the moment
 * @array: the array
 * @low: the lowest int in array
 * @high: the highest int in array
 *
 * Return: void
 */

void print_subarray(int *array, size_t low, size_t high)
{
size_t i;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
{
printf(", ");
}
}
printf("\n");
}

/**
 * binary_search: the function to do binary_search
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched in the array
 *
 * Return: Index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t middle;

if (array == NULL)
{
return (-1);
}
while (low <= high)
{
print_subarray(array, low, high);

middle = low + (high - low) / 2;
if (array[middle] == value)
{
return (middle);
}
else if (array[middle] < value)
{
low = middle + 1;
}
else
{
high = middle - 1;
}
}
return (-1);
}
