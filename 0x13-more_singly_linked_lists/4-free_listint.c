#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}
