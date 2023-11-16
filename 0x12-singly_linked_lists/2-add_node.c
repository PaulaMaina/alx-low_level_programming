#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: head of the list
 * @str: string element to be added
 *
 * Return: the address of the new element else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int n;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	for (n = 0; str && str[n]; n++)
		;
	newNode->str = (str) ? strdup(str) : NULL;
	newNode->len = n;
	newNode->next = (*head) ? *head : NULL;
	*head = newNode;

	return (newNode);
}
