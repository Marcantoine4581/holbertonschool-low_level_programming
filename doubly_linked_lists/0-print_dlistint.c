#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: a pointer which point the structure dlistint_t.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
