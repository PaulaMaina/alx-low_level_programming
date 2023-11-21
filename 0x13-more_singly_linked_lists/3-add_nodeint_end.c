#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list
 * @head: head
 * @n: integer
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *endNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	if (*head)
	{
		endNode = *head;
		while (endNode->next)
			endNode = endNode->next;
		endNode->next = newNode;
	}
	else
		*head = newNode;
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
