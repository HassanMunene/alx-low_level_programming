#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at the specified pos
 * @head: pointer to the header pointer
 * @index: The node position
 *
 * Return: 1 if success or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *node;

	if (!*head)
	{
		return (1);
	}
	prev = get_node(*head, index - 1);
	node = get_node(*head, index);

	if (!node)
	{
		return (-1);
	}
	if (index != 0)
	{
		prev->next = node->next;
		node->next = 0;
	}
	else
	{
		*head = node->next;
	}
	free(node);
	return (1);
}
/**
 * get_node - get node at index
 * @head: head node
 * @index: index node
 *
 * Return: address of index node
 */
listint_t *get_node(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (0);
}
