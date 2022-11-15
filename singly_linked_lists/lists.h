#ifndef LISTS_H
#define LIST_H
#include <stdarg.h>
#include <stddef.h>
/**
 * putchar - writes the character c to stdout.
 * @char: string argument.
 * Return: On success 1.
 */
int _putchar(char);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
