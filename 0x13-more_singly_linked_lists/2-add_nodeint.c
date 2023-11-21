#include "lists.h"

/**
 * add_nodeint - adds a new node
 * at the beginning of a listint_t list
 * @head: head node
 * @n: integer
 *
 * Return: address of the new element else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
