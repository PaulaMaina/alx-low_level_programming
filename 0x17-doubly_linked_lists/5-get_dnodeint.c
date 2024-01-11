#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head
 * @index: index of the node
 *
 * Return: nth node or NULLL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node;
	unsigned int len;

	len = 0;

	if (head == NULL)
		return (NULL);

	temp_node = head;
	while (temp_node)
	{
		if (index == len)
			return (temp_node);
		len++;
		temp_node = temp_node->next;
	}
	return (NULL);
}
