#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the linked list
 * @head: head of the list
 * @str: string to be added
 *
 * Return: address of the new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	unsigned int n;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	for (n = 0; str && str[n]; n++)
		;

	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = newNode;
	}
	else
		*head = newNode;
	newNode->str = (str) ? strdup(str) : NULL;
	newNode->len = n;
	newNode->next = NULL;

	return (newNode);
}
