#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

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
