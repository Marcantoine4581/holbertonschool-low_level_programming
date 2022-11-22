#include "lists.h"
#include <stdarg.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The integer for the new node to contain.
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx, do not add
 * the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		*h = new;
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
	new->prev = temp;

	return (new);
}
