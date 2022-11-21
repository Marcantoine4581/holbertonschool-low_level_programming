#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the number to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
