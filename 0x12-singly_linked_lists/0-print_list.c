#include "lists.h"

/**
 * print_list - prints all the elements of the list_t list
 * @h: head of the singly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *curr;
	size_t nodes;

	nodes = 0;
	curr = h;
	while (curr != NULL)
	{
		printf("[%d] %s\n", curr->len, curr->str);
		curr = curr->next;
		nodes++;
	}

	return (nodes);
}
