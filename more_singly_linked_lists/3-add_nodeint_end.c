#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the number to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		*temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		last->next = new;
	}
	return (new);
}
