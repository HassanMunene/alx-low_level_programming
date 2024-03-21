#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - This function basically take the pointer as
 * the parameter stores the address of my_dog init and then
 * through that it prints the members that have been initialised in
 * the main() fuction
 *
 * @d: a pointer to the my_dog variable
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	printf("Name: ");

	if (!d->name)
	{
		printf("(nill)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("Age: ");
	printf("%f\n", d->age);
	printf("owner: ");
	if (!d->owner)
	{
		printf("(nill)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
