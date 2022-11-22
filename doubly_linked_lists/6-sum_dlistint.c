#include "lists.h"
#include <stdarg.h>

/**
 * sum_dlistint - function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 * if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
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
