#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: a pointer which point the structure dlistint_t.
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
