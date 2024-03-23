#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: pointer to the first index pointer
 * @n: the integer to add to the new node
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode, *tempPointer;
    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->next = NULL;
    newNode->n = n;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return (*head);
    }
    tempPointer = *head;
    while (tempPointer->next != NULL)
    {
        tempPointer = tempPointer->next;
    }
    tempPointer->next = newNode;
    newNode->prev = tempPointer;
    return (*head);
}
