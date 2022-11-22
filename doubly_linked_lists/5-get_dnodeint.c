#include "lists.h"
#include <stdarg.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: is the index of the node, starting at 0.
 * Return:  the nth node of a dlistint_t linked list.
 * if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
