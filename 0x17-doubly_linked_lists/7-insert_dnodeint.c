#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: integer
 *
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node, *temp_prev;
	unsigned int count;

	if (h == NULL && idx > 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n, new_node->prev = new_node->next = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node, *h = new_node;
		}
		else
			*h = new_node;
		return (new_node);
	}
	count = 1, temp_node = (*h)->next;
	while (temp_node)
	{
		if (idx == count)
		{
			temp_node->prev->next = new_node;
			new_node->prev = temp_node->prev;
			new_node->next = temp_node, temp_node->prev = new_node;
			return (new_node);
		}
		count++, temp_prev = temp_node, temp_node = temp_node->next;
	}
	if (temp_node == NULL && count == idx)
	{
		temp_prev->next = new_node, new_node->prev = temp_prev;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
