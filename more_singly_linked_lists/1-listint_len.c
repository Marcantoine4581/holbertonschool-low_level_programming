#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
 * @h: a pointer which point the structure list_t.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
