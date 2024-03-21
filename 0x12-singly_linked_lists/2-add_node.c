#include "lists.h"

/**
 * add_node - add a new node at the beginning of the list
 * @head: the adress of the head
 * @str: the string in the new node
 *
 * Return: the pointer to the new node which now becomes 
 * the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrhead;
	list_t *newhead;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	ptrhead = *head;
	*head = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = ptrhead;
	newhead = *head;

	return (newhead);
}
