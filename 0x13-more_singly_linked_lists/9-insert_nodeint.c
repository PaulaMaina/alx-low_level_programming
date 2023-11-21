#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: index of the list where the new node should be added
 * @n: the data of the new node
 *
 * Description: if it is not possible to add new node at index idx,
 * do not add the new node and return NULL
 *
 * Return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *newNode, *current = *head;

	if (!head)
		return (NULL);

	for (p = 0; p < idx - 1 && current; p++)
		current = current->next;
	if (p != idx - 1 && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else if (current)
	{
		newNode->next = current->next;
		current->next = newNode;
	}

	return (newNode);
}
