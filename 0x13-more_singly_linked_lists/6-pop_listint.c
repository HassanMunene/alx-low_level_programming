#include "lists.h"

/**
 * pop_listint - deletes the node pointed by head and find the
 * value in that node
 * @head: the pointer to head pointer
 *
 * Return: The value held in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *holder;
	int value;

	holder = *head;
	value = holder->n;
	temp = holder->next;
	free(holder);
	*head = temp;
	return (value);


}
