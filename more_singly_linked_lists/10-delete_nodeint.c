#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list.
 * @head: A pointer to the head of the list_t list.
 * @index: is the index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode = *head;
	unsigned int node;

	if (index == 0)
	{
		*head = (*head)->next;
		free(delnode);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (delnode == NULL)
			return (-1);

		delnode = delnode->next;
	}
	temp = delnode->next;
	delnode->next = temp->next;
	free(temp);

	return (1);
}
