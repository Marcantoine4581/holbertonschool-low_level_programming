#include "lists.h"
#include <stdarg.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 * a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: is the index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delnode = *head;
	unsigned int node;

	if (delnode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(delnode);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (delnode->next == NULL)
			return (-1);

		delnode = delnode->next;
	}
	temp = delnode->next;
	delnode->next = temp->next;
	(temp->next)->prev = NULL;
	free(temp);

	return (1);
}
