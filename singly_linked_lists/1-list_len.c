#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: a pointer which point the structure list_t.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
