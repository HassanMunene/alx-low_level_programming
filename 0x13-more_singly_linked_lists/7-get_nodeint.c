#include "lists.h"

/**
 * get_nodeint_at_index - find the node at the specified position
 * @head: The pointer to the first node
 * @index: The nth node
 *
 * Return: pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *holder = head;
	unsigned int val = index;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= val)
		{
			holder = holder->next;
			i++;
		}
	}
	return (holder);
}
