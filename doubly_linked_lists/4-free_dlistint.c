#include "lists.h"
#include <stdarg.h>

/**
 * free_dlistint - function that frees a listint_t list.
 * listint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
