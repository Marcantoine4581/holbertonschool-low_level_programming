#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: a pointer which point the structure list_t.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
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
