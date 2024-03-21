#include "lists.h"
/**
 * dlistint_len - get the number of nodes in a list
 * @h: the pointer to the first node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t counter = 0;
while (h != NULL)
{
h = h->next;
counter += 1;
}
return (counter);
}
