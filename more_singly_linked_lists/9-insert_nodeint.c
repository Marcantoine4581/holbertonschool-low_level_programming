#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head: A pointer to the head of the list_t list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The integer for the new node to contain.
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx, do not add
 * the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
