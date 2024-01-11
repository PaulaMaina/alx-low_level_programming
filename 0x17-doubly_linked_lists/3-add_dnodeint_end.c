#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head node
 * @n: integer
 *
 * Return: address of the new element or NULL
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = new_node;
		new_node->prev = *head;
		return (new_node);
	}
	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
