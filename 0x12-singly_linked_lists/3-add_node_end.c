#include "lists.h"

/**
 * add_node_end - used to add the node at the end of a list
 * @head: a pointer to the head pointer
 * @str: The string to be in the node
 *
 * Return: A pointer to the first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *node;
	list_t *last;

	if (!string)
	{
		return (0);
	}
	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (0);
	}
	node->str = string;
	node->len = strlen(string);
	node->next = NULL;

	last = get_last(head);
	if (last)
	{
		last->next = node;
	}
	else
	{
		*head = node;
	}
	return (node);
}

/**
 * get_last - get last node of linked list
 *
 * Return: address of the last element
 * @head: head node
 */
list_t *get_last(list_t **head)
{
	list_t *last = *head;

	if (!last)
	{
		return (0);
	}
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}
