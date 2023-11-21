#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * and returns the head node's data(n)
 * @head: head node
 *
 * Return: head node's n or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int head_n;

	if (!(*head))
		return (0);
	head_n = (*head)->n;
	tempNode = *head;
	*head = (*head)->next;
	free(tempNode);

	return (head_n);
}
