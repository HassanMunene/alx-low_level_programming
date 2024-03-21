#ifndef LIST_H
#define LIST_H

#include <stddef.h>
/**
 * struct dlistint_s - doubly linkedlist
 * @n: int
 * @prev: points to previous node
 * @next: points to  next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif