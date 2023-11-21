#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
