#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @list_t: structure
 * @h: a pointer which point the structure list_t.
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes.
 * Otherwise - the sum of all parameters.
 */
size_t print_list(const list_t *h)
{
unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
