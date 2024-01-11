#include "lists.h"

/**
 * sum_dlistint - returns the summ of all the data of a list
 * @head: head
 *
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
