#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: A pointer to the head of the list_t list.
 * Return: the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
