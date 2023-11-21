#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a list
 * @head: head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode = *head;
	listint_t *delNode  = NULL;
	unsigned int p;

	if (!(*head))
		return (-1);
	for (p = 1; p < index; p++)
	{
		if (prevNode->next)
			prevNode = prevNode->next;
		else
			return (-1);
	}
	if (index == 0)
	{
		delNode = prevNode;
		*head = (*head)->next;
	}
	else
	{
		delNode = prevNode->next;
		prevNode->next = delNode->next;
	}
	free(delNode);
	return (1);
}
