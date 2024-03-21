#include "lists.h"

/*
 * main - check the code
 *
 * Return: ALways 0
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "alehandro");
	add_node(&head, "asaiasia");
	add_node(&head, "Augustine");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	print_list(head);
	return (0);
}
