#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of ai
 * dlistint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the number to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
