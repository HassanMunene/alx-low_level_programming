#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delete a node at index
 * @header: Pointer to the pointer of head Node
 * @index: position of the node to be deleted
 *
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp;
    dlistint_t *temp2;

    if (*head == NULL)
    {
        return (-1);
    }

    /*delete node if the index is 0 meaning 1st node*/
    if (index == 0 && *head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        temp = NULL;
        (*head)->prev = NULL;
        return (1);
    }
    if (index > 0)
    {
        temp = *head;

        /*loop to get temp to point to THE node*/
        while (index > 0)
        {
            temp = temp->next;
            index--;
        }
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
        return (1);
    }
    if (*head != NULL && (*head)->next == NULL)
    {
        free(head);
        head = NULL;
        return (1);
    }
    return (1);
}
