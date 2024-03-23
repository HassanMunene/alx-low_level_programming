#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - The sum of all ns in node
 * @head: pointer to the head node
 *
 * Return: an integer representing the sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current;
current = head;
if (head == NULL)
{
return (0);
}

while ((*current).next != NULL)
{
sum += (*current).n;
current = current->next;
}
sum = sum + (*current).n;
return (sum);
}
