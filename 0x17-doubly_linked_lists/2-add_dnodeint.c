#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node at the beginning of list
 * @head: it is pointer that points to the pointer of first node
 * @n: The integer value to be added once node is created
 *
 * Return: the address of the new node which in essence head will point to
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (*head == NULL)
{
new->next = NULL;
}
if (*head != NULL)
{
(*head)->prev = new;
}
new->next = *head;
*head = new;
return (*head);
}
