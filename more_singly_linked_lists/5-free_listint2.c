#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * listint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
