#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: A pointer to the head of the list_t list.
 * Return: head node’s data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = temp->next;
	free(temp);

	return (data);
}
