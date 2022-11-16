#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list.
 * listint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
	free(head);
}
