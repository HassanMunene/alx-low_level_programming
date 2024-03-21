#include "lists.h"

/**
 * free_listint - will be used to free the linked list
 * @head: The pointer to the first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *holder;

	holder = head;
	while (holder != NULL)
	{
		temp = holder;
		holder = holder->next;
		free(temp);
	}
}
