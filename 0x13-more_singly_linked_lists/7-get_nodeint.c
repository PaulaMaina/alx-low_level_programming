#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node
 * @index: index of the node, starting at 0
 *
 * Return: node at index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; index > 0 && head->next; i++)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
