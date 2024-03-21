#include "lists.h"

/**
 * sum_listint - calculate the sum of all the node's values
 * @head: pointer to the first node
 *
 * Return: The sum of the values
 */
int sum_listint(listint_t *head)
{
	listint_t *holder;
	int value = 0;

	holder = head;
	if (holder == NULL)
	{
		return (0);
	}
	else
	{
		while (holder != NULL)
		{
			value = value + holder->n;
			holder = holder->next;
		}
	}
	return (value);
}
