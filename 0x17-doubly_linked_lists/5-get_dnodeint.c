#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - get a node at a specific index
 * @head: pointer to the head node
 * @index: position of the node we want to extract
 *
 * Return: address of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int idx = 0;
unsigned int i;

current = head;
if (head == NULL)
{
return (NULL);
}
if (index == 0)
{
return (head);
}

for (i = 1; current->next != NULL; i++)
{
current = current->next;
}
current = head;
if (index > (i - 1))
{
printf("yooo");
return (NULL);
}
while (current->next != NULL)
{
idx += 1;
current = current->next;
if (idx == index)
{
head = current;
}
}
return (head);
}
