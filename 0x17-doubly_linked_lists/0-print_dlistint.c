#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a listintt list
 * @h: pointer to the first node in the list
 *
 * Return: the no of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t counter = 0;
    while (h != NULL)
    {
    printf("%d\n", h->n);
    counter += 1;
    h = h->next;
    }
    return (counter);
}
