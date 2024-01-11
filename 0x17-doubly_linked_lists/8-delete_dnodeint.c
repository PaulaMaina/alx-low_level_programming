#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head
 * @index: index
 *
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node;
	unsigned int count;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp_node), temp_node = NULL;
		return (1);
	}
	count = 1, temp_node = (*head)->next;
	if (temp_node)
	{
		while (temp_node->next)
		{
			if (index == count)
			{
				temp_node->prev->next = temp_node->next;
				temp_node->next->prev = temp_node->prev;
				free(temp_node), temp_node = NULL;
				return (1);
			}
			count++, temp_node = temp_node->next;
		}
	}
	if (temp_node && index == count)
	{
		temp_node->prev->next = NULL;
		free(temp_node);
		return (1);
	}
	return (-1);
}
