#include "lists.h"

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
dlistint_t *nodeAddr;
unsigned int idx = 0;

current = head;

while (current->next != NULL)
{
idx += 1;
current = current->next;
if (idx == index)
{
nodeAddr = current;
}
}
return (nodeAddr);
}
