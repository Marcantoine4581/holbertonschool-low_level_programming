#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: a pointer which point the structure list_t.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		return (0);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
