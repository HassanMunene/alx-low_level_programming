#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - add a node at a specific position
 * @h: pointer to the head pointer that points to head node
 * @idx: the position at which we want to insert the node
 * @n: the value of the node
 *
 * Return: the address of the new node | NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode;
dlistint_t *current;
dlistint_t *temp1;
dlistint_t *temp2;

unsigned int index;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
current = *h;

if (idx == 0)
{
    temp2 = current;
    (*temp2).prev = newNode;
    (*newNode).next = temp2;
    (*newNode).prev = NULL;
    *h = newNode;
    return (newNode);
}

for (index = 0; (*current).next != NULL; index++)
{
if (index == idx)
{
temp1 = (*current).prev;
temp2 = current;
}
current = current->next;
}

/* this if the idx is the last node in our case*/
if (index == idx && (*current).next == NULL)
{
temp1 = (*current).prev;
temp2 = current;
}
/* if idx is out of range*/
if (index < idx)
{
return (NULL);
}
(*temp1).next = newNode;
(*temp2).prev = newNode;
(*newNode).prev = temp1;
(*newNode).next = temp2;
return (newNode);
}
