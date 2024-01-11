#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint list
 * @h: head node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;

	if (h == NULL)
		return (len);

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
