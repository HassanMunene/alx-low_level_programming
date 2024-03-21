#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: pointer to the head pointer
 * @n: the integer in the node
 *
 * Return: pointer to start of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	const int value = n;

	new = malloc(sizeof(listint_t));
	new->n = value;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *lastnode;

		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new;
	}
	return (*head);
}

