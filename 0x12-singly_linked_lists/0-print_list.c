#include "lists.h"

/**
 * print_list - prints all the elements of the list_t list
 * @h: head of the singly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		nodes++;
		h = h->next;
	}

	return (nodes);
}
