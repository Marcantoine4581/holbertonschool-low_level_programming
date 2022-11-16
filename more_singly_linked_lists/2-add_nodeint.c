#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the number to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
