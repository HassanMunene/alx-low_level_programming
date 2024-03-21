#include "lists.h"

/**
 * listint2 - used to free a ll and set head to NULL
 * @head: pointer to head pointer
 *
 * Return: nothing./
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *holder;

	holder = *head;
	while (holder != NULL)
	{
		temp = holder;
		holder = holder->next;
		free(temp);
	}
	*head = NULL;
}
