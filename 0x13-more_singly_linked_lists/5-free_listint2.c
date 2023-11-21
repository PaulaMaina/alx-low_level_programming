#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 *
 * Description: sets the head to NULL
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	while (head && *head)
	{
		freeNode = *head;
		*head = (*head)->next;
		free(freeNode);
	}
}
