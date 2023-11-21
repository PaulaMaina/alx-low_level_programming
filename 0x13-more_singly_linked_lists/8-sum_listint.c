#include "lists.h"

/**
 * sum_listint - returns the sum all the data n of a list
 * @head: head node
 *
 * Return: sum of all the data or 0
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
